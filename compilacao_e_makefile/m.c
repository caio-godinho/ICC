#include<stdio.h>
#include "l1.h" //ARQUIVO CABEÇALHO. POSSUI APENAS DECLARAÇÃO DE FUNÇÕES
#include "l3.h"

int main(int argc, char *argv[]){
    int x;
    scanf("%d", &x);
    int y = f(x);
    printf("f(%d) = %d\n", x,  y);

    int z = g(x, y);
    printf("g(%d) = %d\n", x, z);
}

//gcc -o teste2.o -c teste2.c COMPILA
//gcc -o teste.o -c teste.c COMPILA
//gcc -o prog teste.o teste2.o CRIA EXECUTÁVEL 
// ./prog RODA EXECUTÁVEL
// NÃO PRECISA COMPILAR CABEÇALHO, OU SEJA, O ARQUIVO.H NÃO PRECISA SER COMPILADO, APENAS INCLUÍDO NOS ARQUIVOS