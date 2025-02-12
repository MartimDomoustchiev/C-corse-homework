CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -lm

all: quadraticroots

quadraticroots: main.o quadraticroots.o
    $(CC) $(CFLAGS) -o quadraticroots main.o quadraticroots.o

main.o: main.c quadraticroots.h
    $(CC) $(CFLAGS) -c main.c

quadraticroots.o: quadraticroots.c quadraticroots.h
    $(CC) $(CFLAGS) -c quadraticroots.c

clean:
    rm -f *.o quadraticroots