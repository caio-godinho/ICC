all: prog

run:
	./prog

prog: main.o invalida.o ano.o dia.o mes.o
	gcc -o prog main.o invalida.o dia.o mes.o ano.o

main.o: main.c
	gcc -o main.o -c main.c

invalida.o: invalida.c
	gcc -o invalida.o -c invalida.c

ano.o: ano.c
	gcc -o ano.o -c ano.c

dia.o: dia.c
	gcc -o dia.o -c dia.c

mes.o: mes.c
	gcc -o mes.o -c mes.c

clean:
	rm *.o
	rm prog.exe