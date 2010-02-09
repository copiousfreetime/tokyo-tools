CFLAGS = -D_GNU_SOURCE -std=c99 -g -O3 -I/data1/tch/tc/include -L/data1/tch/tc/lib
#LDFLAGS = -ltokyocabinet.a
LDFLAGS = -lpthread -lbz2 -lz -lm
CC = gcc

default: tchcheck tchsplit

tchsplit: tchsplit.c backend_for.c /data1/tch/tc/lib/libtokyocabinet.a
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

tchcheck: tchcheck.c sglib.h
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $<

iterdb: iterdb.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $<
clean:
	rm -f tchcheck tchsplit iterdb *~ *.o *.m
	rm -f check-offsets conversion-rate gen-offsets gen-offsets-by-seek
