require 'rake/clean'


PROGRAMS = %w[ tchsplit tchcheck iterdb ]

SRC = FileList["*.c"]
OBJ = SRC.ext('o')

CC      = "gcc"
CFLAGS  = %w[ -D_GNU_SOURCE -std=c99 -g -O3 ]
LDFLAGS = %w[ -lpthread -lbz2 -lz -lm -ltokyocabinet ]

rule '.o' => '.c' do |t|
  sh "#{CC} #{CFLAGS.join(' ')} -c -o #{t.name} #{t.prerequisites.join(' ')}"
end

CLEAN.include("*.o")
CLEAN.include("backend_for.*")
CLOBBER.include( PROGRAMS )

desc "Create iterdb"
file "iterdb" => %w[ iterdb.o print_progress.o ] do |t|
  sh "#{CC} #{LDFLAGS.join(' ')} -o #{t.name} #{t.prerequisites.join(' ')}"
end

desc "Create backend.[ch]"
task :backend_for do
  ruby "-rubygems generate-backend-for.rb --host solr5.collectiveintellect.com"
end

file "backend_for.c" => :backend_for
file "backend_for.h" => :backend_for

desc "Create tch2tcr"
file "tch2tcr" => %w[ backend_for.o print_progress.o tch2tcr.o ] do |t|
  sh "#{CC} #{LDFLAGS.join(' ')} -ltokyotyrant -o #{t.name} #{t.prerequisites.join(' ')}"
end

task :default => "tch2tcr"
