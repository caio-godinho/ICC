all: prog

run: 
	./prog

prog: m.o l1.o l3.o
	gcc -o prog l1.o l3.o m.o

l1.o: l1.c
	gcc -o l1.o -c l1.c

l3.o: l3.c
	gcc -o l3.o -c l3.c

m.o: m.c
	gcc -o m.o -c m.c

clean:
	rm *.o
	rm prog