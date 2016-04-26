.SUFFIXES: .c .o

CC=g++

SRCS=main.c
OBJS=$(SRCS:.c=.o)
CFLAGS = -std=c++0x

EXE=main

all: $(OBJS)
	$(CC) -o $(EXE) $(OBJS) 
	@echo '^_^ ^_^ ^_^ ^_^ ^_^ ^_^ OK ^_^ ^_^ ^_^ ^_^ ^_^ ^_^'

.c.o: 
	$(CC) -Wall $(CFLAGS) -g -o $@ -c $<

clean:
	-rm -f $(OBJS) $(EXE)
	-rm -f core*

