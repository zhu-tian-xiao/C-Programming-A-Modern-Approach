inventory: inventory.o part.o readline.o qsort.o
	gcc -o inventory inventory.o part.o readline.o qsort.o

inventory.o: inventory.c part.h readline.h qsort.h
	gcc -c inventory.c

part.o: part.c part.h
	gcc -c part.c

readline.o: readline.c readline.h 
	gcc -c readline.c

qsort.o: qsort.c qsort.h part.h
	gcc -c qsort.c