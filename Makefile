CFLAGS = -D_GNU_SOURCE -std=c99 -g -O3 
#LDFLAGS = -ltokyocabinet.a
LDFLAGS = 
CC = gcc

default: tchcheck tchsplit iterdb

tchsplit: tchsplit.c backend_for.c 
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

tchcheck: tchcheck.c sglib.h
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $<

iterdb: iterdb.c print_progress.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $<
clean:
	rm -f tchcheck tchsplit iterdb *~ *.o *.m
	rm -f check-offsets conversion-rate gen-offsets gen-offsets-by-seek
