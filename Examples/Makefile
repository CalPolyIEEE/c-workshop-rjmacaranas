#C Workshop Makefile

CC=gcc

all:
	$(CC) example1.c -o example1
	$(CC) example2.c -o example2
	$(CC) example3.c -o example3
	$(CC) example4.c head.c -o example4
	$(CC) -E example4.c -o example4.i
	$(CC) main.c db.c -o main

clean:
	rm example1
	rm example2
	rm example3
	rm example4
	rm example4.i
	rm main
