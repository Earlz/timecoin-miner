CFLAGS=-O2 -Wall -march=native
CC=gcc

default:
	${CC} ${CFLAGS} -c sha256.c
	${CC} ${CFLAGS} -c main.c
	${CC} *.o -o timecoinm

clean:
	rm -f *.o timecoinm
	


