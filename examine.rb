#!/usr/bin/env ruby

fname = ARGV.shift

bad_db_types = {
  0x01 => 'hash',
  0x02 => 'btree',
  0x03 => 'fixed',
  0x04 => 'table' 
}

db_types = {
  0x00 => 'hash',
  0x01 => 'btree',
  0x02 => 'fixed',
  0x03 => 'table' 
}


flags = {
  0x01 => 'open',
  0x02 => 'fatal'
}

options = {
  0x01 => 'large',
  0x02 => 'deflate',
  0x04 => 'bzip2',
  0x08 => 'tcbs',
  0x10 => 'extra codec'
}

def to64bit( str )
  final = 0
  bytes = str.unpack("C*")
  bytes.each_with_index do |b,idx|
    final |= (b << (8*idx))
  end
  return final
end

header = {}
order = [ 'database type',
  'additional flags',
  'bucket number',
  'alignment',
  'free block pool',
  'options',
  'record number',
  'file size', 
]
File.open( fname ) do |infile|
  header['magic']            = infile.read( 32 )
  header['database type']    = db_types[infile.read( 1 ).unpack("C").first]

  f = infile.read( 1 ).unpack("C").first
  header['additional flags'] = []
  flags.keys.each do |k|
    if (k & f) > 0 then
      header['additional flags'] << flags[k]
    end
  end
  header['additional flags'] = header['additional flags'].join(" ")

  header['alignment']        = 2**(infile.read( 1 ).unpack("C").first)
  header['free block pool']  = 2**(infile.read( 1 ).unpack("C").first)
  opt = infile.read(1).unpack("C").first

  header['options']          = []
  options.keys.each do |k|
    if (k & opt) > 0 then
      header['options'] << options[k]
    end
  end
  header['options'] = header['options'].join(" ")

  infile.seek( 40, IO::SEEK_SET )
  header['bucket number']  = to64bit( infile.read( 8 ) )
  header['record number']  = to64bit( infile.read( 8 ) )
  header['file size']      = to64bit( infile.read( 8 ) )
  header['first record']   = to64bit( infile.read( 8 ) )

  infile.seek( 128, IO::SEEK_SET )
  header['opaq']  = infile.read( 128 )

  order.each do |k|
    puts "#{k}: #{header[k]}"
  end


end
