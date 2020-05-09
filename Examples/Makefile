#C Workshop Makefile

CC=gcc
CCFLAGS  = -pedantic -Wall -Werror

all:
	$(CC) $(CCFLAGS) example1.c -o example1
	$(CC) $(CCFLAGS) example2.c -o example2
	$(CC) $(CCFLAGS) example3.c -o example3
	$(CC) $(CCFLAGS) example4.c head.c -o example4
	$(CC) $(CCFLAGS) -E example4.c -o example4.i
	$(CC) main.c db.c -o main

example1:
	$(CC) $(CCFLAGS) example1.c -o example1

example2:
	$(CC) $(CCFLAGS) example2.c -o example2

example3:
	$(CC) $(CCFLAGS) example3.c -o example3

example4:
	$(CC) $(CCFLAGS) example4.c head.c -o example4

debounce:
	$(CC) main.c db.c -o main

clean:
	rm -f example1
	rm -f example2
	rm -f example3
	rm -f example4
	rm -f example4.i
	rm -f main
