CC=gcc
OUTPUT=bin
CFLAGS=-lcurl
DEBUGGER=gdb

all:
	$(CC) xget.c -o $(OUTPUT)/xget $(CFLAGS)

debug:
	$(CC) -g xget.c $(CFLAGS) && $(DEBUGGER) a.out
