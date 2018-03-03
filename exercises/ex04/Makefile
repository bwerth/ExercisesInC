trout: trout.h util.h trout.c
	gcc -g -Wall -o trout.o trout.c util.c

util: util.h trout.h util.c
	gcc -g -Wall -o util.o util.c trout.c

main: trout.h util.h main.c
	gcc -g -Wall -o main.o main.c util.c trout.c

all: trout.o util.o main.o
	gcc -g -Wall -o trout trout.o util.o main.o