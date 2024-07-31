# Very simplistic Makefile
# lib.c / lib.h is the static library code
# main.c is the main c code which uses the static library


################################################################################
# Toolchain
################################################################################

# If CROSS_COMPILE is not defined on the host, then it is just ignored

# Below not required in this case?
#HOSTCC			:=	gcc
#export HOSTCC

CC			:=	${CROSS_COMPILE}gcc

# Below is standard but not required in this case

#CPP			:=	${CROSS_COMPILE}cpp
#AS			:=	${CROSS_COMPILE}gcc
#AR			:=	${CROSS_COMPILE}ar
#LINKER			:=	${CROSS_COMPILE}ld
#OC			:=	${CROSS_COMPILE}objcopy
#OD			:=	${CROSS_COMPILE}objdump
#NM			:=	${CROSS_COMPILE}nm
#PP			:=	${CROSS_COMPILE}gcc -E
#DTC			:=	dtc

all: main.c lib.c lib.h
# Build the library asm code & object code
	$(CC) -S lib.c
	$(CC) -c lib.c

# Build the main asm code & code object code
	$(CC) -S main.c
	$(CC) -c main.c

# Link the main object file with the library object code
	$(CC) -o main main.o lib.o

clean:
	rm *.o 
	rm *.s
	rm main
