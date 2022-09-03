all: prog

run:
	./prog

prog: main.o funcoes.o
	gcc -o prog main.o funcoes.o

main.o: main.c
	gcc -o main.o -c main.c

funcoes.o: funcoes.c
	gcc -o funcoes.o -c funcoes.c

clean:
	rm *.o
	rm prog