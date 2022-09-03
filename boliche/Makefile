all: prog

run:
	./prog
	
prog: b1.o b2.o
	gcc -o prog b1.o b2.o

b1.o: b1.c
	gcc -o b1.o -c b1.c

b2.o: b2.c
	gcc -o b2.o -c b2.c

clean:
	rm *.o
	rm prog.exe