main: main.o stack.o person.o print.o  
	gcc main.o stack.o person.o print.o -o main
  
main.o: main.c
	gcc -c main.c  
  
stack.o: stack.c stack.h  
	gcc -c stack.c  
  
person.o: person.c person.h
	gcc -c person.c  

print.o: print.c print.h
	gcc -c print.c

clean:
	-rm *.o main
