# Very simplistic Makefile
# lin.c / lib.h is the static library
# main.c is the main c code which uses the static library

all: main.c lib.c lib.h
# Build the library object code
	gcc -c lib.c
# Build the main code object code
	gcc -c main.c

# Link the main object file with the library object code
	gcc -o main main.o lib.o

clean:
	rm *.o 
	rm main