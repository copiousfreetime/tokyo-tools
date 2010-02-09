#!/usr/bin/env ruby
#
require 'rubygems'
require 'bindata'
require 'hitimes'
require 'zlib'
require 'digest/md5'
require 'mmap'


# one byte, broken up into db types
class DbType < BinData::Record
  bit1 :btree
  bit1 :fixed
  bit1 :table

  def to_s 
    return 'btree' if btree?
    return 'fixed' if fixed?
    return 'table' if table?
    return 'hash'
  end

  def btree?
    self.btree == 1
  end

  def fixed?
    self.fixed == 1
  end

  def table?
    self.table == 1
  end

  def hash?
    not btree? and not fixed? and not table?
  end

end

class DbAdditionalFlags < BinData::Record
  uint8 :flags

  def fatal?
    (self.flags & 0x02) > 0
  end

  def open?
    (self.flags & 0x01) > 0
  end

  def to_a
    a = []
    a << 'open'  if  open?
    a << 'fatal' if fatal?
    return a
  end

  def to_s
    to_a.join(' ')
  end

end

class DbOptions < BinData::Record
  uint8 :options

  def self.bit_fields
    @bit_fields ||= %w[ large deflate bzip2 tcbs extra ]
  end

  def large?
    (self.options & 0x01) > 0
  end

  def deflate?
    (self.options & 0x02) > 0
  end

  def bzip2?
    (self.options & 0x04) > 0
  end

  def tcbs?
    (self.options & 0x08) > 0
  end

  def extra?
    (self.options & 0x10) > 0
  end

  def to_a
    a = []
    DbOptions.bit_fields.each do |bit_field|
      a << bit_field if self.send("#{bit_field}?") 
    end
    return a
  end

  def to_s
    to_a.join(' ')
  end

end

class VariableLengthInt < BinData::BasePrimitive
  register( self.name, self )

  def value_to_binary_string( val )
    result = []
    num = val
    if num == 0 then
      result << 0x00
    else
      while ( num > 0 ) do
        rem = num & 0x7f # strip of the least significatn 7 bits
        num >>= 7
        if num > 0 then  # check if there are more shifts coming
          rem *= -1      # make sure rem is negatve 
          rem -= 1
        end
        result << rem  # dump rem onto the results
      end
    end

    return val.pack("c*")
  end

  def read_and_return_value( io )
    num = 0
    base = 1
    i = 0
    loop do
      c = io.readbytes(1).unpack("c").first
      if c >= 0 then
        num += (c * base)
        break
      end
      num += ( base * (c + 1 ) * -1 )
      base <<= 7
      i += 1
    end

    return num
  end

  def sensible_default
    0
  end

end

class TokyoHeader < BinData::Record
  endian               :little
  string               :magic, :read_length => 32
  db_type              :db_type, :read_length => 1
  db_additional_flags  :additional_flags, :read_length => 1
  uint8                :alignment_power
  uint8                :free_block_pool_power
  db_options           :options, :read_length => 1
  string               :empty, :read_length => 3
  uint64               :bucket_number
  uint64               :record_number
  uint64               :file_size
  uint64               :first_offset
  string               :opaque, :read_length => 128


  hide :empty, :opaque

  def alignment
    @alignment ||= (1 << self.alignment_power )
  end

  #define HDBMINRUNIT    48 
  #define HDBIOBUFSIZ    8192
  # HDBMAGICFB = 0xb0
  # HDBMAGICREC = 0xc8
end

class TokyoFreeBlock < BinData::Record
  endian :little
  uint8  :magic, :read_length => 1
  uint32 :block_size
  string :block, :read_length => :block_size
end

class TokyoFreeBlockPoolEntry < BinData::Record
  variable_length_int :fpos
  variable_length_int :block_size
end

class TokyoEntry32 < BinData::Record
  endian  :little                       
  uint8   :magic, :read_length => 1
  uint8   :hash_value
  uint32  :left_chain   # 64bit if large db
  uint32  :right_chain  # 64bit if large db
  uint16  :padding_size

  # 20 bytes in now

  variable_length_int :key_size
  variable_length_int :data_size

  string   :key,  :read_length => :key_size
  string   :data, :read_length => :data_size

  string  :padding, :read_length => :padding_size

  attr_accessor :header

  def left
    @left ||= ( self.left_chain << header.alignment_power)
  end
  def right
    @right ||= ( self.right_chain << header.alignment_power )
  end
end


class TokyoEntry64 < BinData::Record
  endian  :little                       
  uint8   :magic, :read_length => 1
  uint8   :hash_value
  uint64  :left_chain   # 64bit if large db
  uint64  :right_chain  # 64bit if large db
  uint16  :padding_size

  # 20 bytes in now

  variable_length_int :key_size
  variable_length_int :data_size

  string   :key,  :read_length => :key_size
  string   :data, :read_length => :data_size

  string  :padding, :read_length => :padding_size

  attr_accessor :header

  def left
    @left ||= ( self.left_chain << header.alignment_power)
  end

  def right
    @right ||= ( self.right_chain << header.alignment_power )
  end
end

def bucket_idx_for_key( key, bucket_number )
  idx = 19780211
  hash = 751
  puts "bucket_number : #{bucket_number}"
  key.length.times do |i|
    idx  = ((idx  * 37) + (key[i].to_i) & 0xffffffffffffffff )
    hash = (hash * 31) ^ (key[(i+1)*-1])
    puts "k = #{key[i].to_i}, r = #{key[(i+1)*-1]}, idx = #{idx}"
    #puts "idx  : #{idx}"
    #puts "hash : #{hash &0xff}"
  end
  return { :bidx => (idx % bucket_number) , :hash => hash & 0xff }
end

def offset_for_key( header, infile, key )
  start = 256
  stride = header.options.large? ? 8 : 4
  bdata  = bucket_idx_for_key( key, header.bucket_number.value )
  puts "bdata : #{bdata.inspect}"

  bdata_offset = start + (bdata[:bidx] * stride)
  #buckets.unmap

  infile.seek( bdata_offset, IO::SEEK_SET )
  #llnum = BinData::Uint64le::read( buckets[bdata_offset, stride ] ).value
  llnum = BinData::Uint64le::read( infile ).value
  puts "llnum : #{llnum}"
  rec_offset = llnum << header.alignment_power
  puts "offset: #{rec_offset}"
  return rec_offset 
end

def get_record_for( header, infile, key )
  rec_offset  = offset_for_key( header, infile, key )
  infile.seek( rec_offset, IO::SEEK_SET )
  puts "   pos: #{infile.pos}"
  rec2 = TokyoEntry64.read( infile )
end

def check_free_block_pool( header, infile )
  free_offset = (256 + ( header.bucket_number.value * 8))
  infile.seek( free_offset, IO::SEEK_SET )
  num_free    = 1 << header.free_block_pool_power.value
  bytes_in_free = (header.first_offset - free_offset)
  puts "There should be #{num_free} entries at #{free_offset} -> #{bytes_in_free}"
  c = 0
  num_free.times do |x|
    fbpe = TokyoFreeBlockPoolEntry.read( infile )
    #puts "@#{infile.pos} #{fbpe.fpos.value} -> #{fbpe.block_size.value}"
    if infile.pos >= header.first_offset then
      puts "Crossed into data at #{x}"
      break
    end
    c += 1
  end
  puts "At offset #{infile.pos}, first_offset #{header.first_offset}, #{c}"
end

def validate_finding_record( header, infile )
  infile.seek( header.first_offset, IO::SEEK_SET )
  rec = nil
  2.times do |x|
    if header.options.large? then
      rec = TokyoEntry64.read( infile )
    else
      rec = TokyoEntry32.read( infile )
    end
  end

  buckets = Mmap.new( infile.path , "r", Mmap::MAP_SHARED )
  puts "Key  : #{rec.key}"
  unzip = Zlib::Inflate.new( -Zlib::MAX_WBITS )

  d = ( header.options.deflate?) ? unzip.inflate( rec.data ) : rec.data
  hd = Digest::MD5.hexdigest( d )
  puts "MD5  : #{hd}"
  puts "Data : #{d}"

  puts "Attempting key #{rec.key}"
  rec2 = get_record_for( header, infile, rec.key )
  puts "Key2 : #{rec2.key}"
  unzip.reset
  d2 = unzip.inflate( rec2.data )
  hd2 = Digest::MD5.hexdigest( d2 )
  puts "MD52 : #{hd2}"
  puts "Matched!" if hd == hd2
  #puts "Data : #{unzip.inflate( rec2.data )}"

  buckets.unmap

end

if $0 == __FILE__ then
  fname = ARGV.shift
  mlid = ARGV.shift
  mlid.strip! if mlid
  #mlid_file  = ARGV.shift

  order = [ 'db_type',
  'additional_flags',
  'bucket_number',
  'alignment',
  'free_block_pool_power',
  'options',
  'record_number',
  'file_size', 
  ]

  File.open( fname ) do |infile|
    header = TokyoHeader.read( infile )
    order.each do |k|
      puts "#{k} : #{header.send( k ).to_s}"
    end

    bucket_length = header.bucket_number * 4

    if header.options.large? then
      bucket_length *= 2
    end

    puts "Bucket length  : #{bucket_length}"
    puts "data starts at : #{bucket_length + 256 }"
    puts "first offset   : #{header.first_offset}"
    puts "free block pool: #{header.first_offset - (bucket_length + 256)}"

    validate_finding_record( header, infile )
    check_free_block_pool(header, infile )
    unzip = Zlib::Inflate.new( -Zlib::MAX_WBITS )

    # good key 1750495290191215470
    #buckets = Mmap.new( infile.path , "r", Mmap::MAP_SHARED )
    #infile.seek( 256, IO::SEEK_SET )

    #boffset = offset_for_key( header, infile, mlid )
    #infile.seek( boffset, IO::SEEK_SET )
    #puts "#{mlid} at offset #{boffset} has magic #{"%0x" % infile.getc}"
  end
end

