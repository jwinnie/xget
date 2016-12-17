CC=gcc
OUTPUT=bin
CURLPATH=-L/usr/lib/x86_64-linux-gnu -lcurl
DEBUGGER=gdb

all:
	$(CC) xget.c -o $(OUTPUT)/xget $(CURLPATH)
	
debug:
	$(CC) -g xget.c $(CURLPATH) && $(DEBUGGER) a.out

