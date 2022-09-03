all: prog

run:
	./prog

prog: main.o criar.o ler.o print.o transposta.o destruir.o
	gcc -g -o prog main.o criar.o ler.o print.o transposta.o destruir.o

main.o: main.c
	gcc -o main.o -c main.c

criar.o: criar.c
	gcc -o criar.o -c criar.c

ler.o: ler.c
	gcc -o ler.o -c ler.c

print.o: print.c
	gcc -o print.o -c print.c

transposta.o: transposta.c
	gcc -o transposta.o -c transposta.c

destruir.o: destruir.c
	gcc -o destruir.o -c destruir.c

clean:
	rm *.o
	rm prog