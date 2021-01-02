CC=gcc 
FLAGS= -Wall -g
AR= ar

all: isort txtfind

isort: insertion_function.o main.o
	$(CC) $(FLAGS) -o isort insertion_function.o main.o

main.o: main.c
	$(CC) $(FLAGS) -c main.c

insertion_function.o: insertion_function.c insertion_function.h
	$(CC) $(FLAGS) -c insertion_function.c

txtfind: txt_functions.o main2.o
	$(CC) $(FLAGS) -o txtfind txt_functions.o main2.o

main2.o: main2.c
	$(CC) $(FLAGS) -c main2.c	

txt_functions.o: txt_functions.h txt_functions.c
	$(CC) $(FLAGS) -c txt_functions.c
clean:
	-rm *o isort txtfind