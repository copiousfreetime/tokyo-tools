#!/usr/bin/env ruby

require 'rubygems'
require 'hitimes'

tc_fname = ARGV.shift
offset_fname = ARGV.shift
counts = Hash.new{ |h,k| h[k] = 0 }

total = 155578984
$stderr.sync = true
log_every = 10_000

File.open( tc_fname ) do |tcfile|
  File.open( offset_fname ) do |infile|
    timer = Hitimes::TimedMetric.new('timer')
    infile.each_line do |offset_line|
      timer.measure do
        offset = offset_line.to_i
        tcfile.seek( offset, IO::SEEK_SET )
        counts[tcfile.getc] += 1
      end
      if timer.count % log_every == 0 then
        msg = counts.collect { |k,v| "#{"%0x" % k} -> #{v}" }.join(', ')
        $stderr.print " #{timer.count} / #{total} at #{"%8.2f" % timer.rate} : #{msg}\r"
      end
    end
  end
end
$stderr.puts

