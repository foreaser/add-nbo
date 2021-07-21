add-nbo : main.o add.o
	gcc -o add-nbo main.o add.o
main.o :
	gcc -c main.c
add.o :
	gcc -c add.c

