#include<stdio.h>

int fatorial(int k){
    int acumulador = 1;

    for(int i = 1; i <= k; i++){
        acumulador *= i;
    }
    
    return acumulador;
}

int soma(int x){
    int acumulador2 = 0;

    for(int i = 1; i <= x; i++){
        acumulador2 += fatorial(i);
    }

    return (acumulador2 + 1);
}

int main(int argc, char *argv[]){
    int n;
    scanf("%d", &n);

    int resposta = soma(n);

    printf("%d", resposta);
}