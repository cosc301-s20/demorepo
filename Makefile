.PHONY: clean
CC=clang
CFLAGS=-g --std=c11 -Wall

all: name

strings: name.o
	$(CC) -Wall -o $@ $^

name.o: name.c 
	$(CC) -c -Wall -o $@ $< $(CFLAGS)

clean:
	rm -f name.o name
