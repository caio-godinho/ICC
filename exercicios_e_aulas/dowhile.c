#include<stdio.h>

int main(int argc, char *argv[]){
    int x = 0;
    int soma = 0;

    do{//DO WHILE FAZ O COMANDO SER EXECUTADO AO MENOS UMA VEZ, MESMO QUE A CONDIÇÃO SEJA FALSA.
        scanf("%d", &x);
        soma += x;
    }while(x != 0);

    printf("%d", soma);
}