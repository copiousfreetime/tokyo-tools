#!/usr/bin/env ruby

require 'rubygems'
require 'hitimes'

t = Hitimes::TimedMetric.new('x')

File.open( ARGV.shift ) do |f|
  f.each_line do |line|
    t.measure { line.to_i }
    if t.count % 100_000 == 0 then
      puts "#{t.count} at #{t.rate}"
    end
  end
end
