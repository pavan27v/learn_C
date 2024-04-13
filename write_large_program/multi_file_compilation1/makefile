$(CC) = gcc

final:  calc.o stack.o
	$(CC) calc.o stack.o -o final

calc.o: calc.c stack.h
	$(CC) -c calc.c
		
stack.o: stack.c stack.h
	$(CC) -c stack.c

clean: 
	rm *.o final

