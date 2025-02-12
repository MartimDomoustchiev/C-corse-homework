all: safeadd safesubtract safemultiply safedivide

safeint.o: safeint.c safeint.h
    $(CC) $(CFLAGS) -c safeint.c

util.o: util.c
    $(CC) $(CFLAGS) -c util.c

safeadd: safeadd.c safeint.o util.o
    $(CC) $(CFLAGS) -o safeadd safeadd.c safeint.o util.o

safesubtract: safesubtract.c safeint.o util.o
    $(CC) $(CFLAGS) -o safesubtract safesubtract.c safeint.o util.o

safemultiply: safemultiply.c safeint.o util.o
    $(CC) $(CFLAGS) -o safemultiply safemultiply.c safeint.o util.o

safedivide: safedivide.c safeint.o util.o
    $(CC) $(CFLAGS) -o safedivide safedivide.c safeint.o util.o

clean:
    rm -f *.o safeadd safesubtract safemultiply safedivide