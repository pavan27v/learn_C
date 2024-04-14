$(CC) = gcc
demo :  main.o f1.o f2.o
	$(CC) main.o f1.o f2.o -o demo
main.o: main.c f1.h f2.h
	$(CC) -c main.c
f1.o:  f1.c f1.h
	$(CC) -c f1.c
f2.o:  f2.c f2.h
	$(CC) -c f2.c
clean: 
	rm *.o demo
