#include<stdio.h>

int fatorial(int x){
    int acumulador = 1;

    for(int i = 2; i <= x; i++){
        acumulador *= i;
    }

    return acumulador;
    
}

int main(int argc, char *argv[]){
    int n;
    scanf("%d", &n);

    int resposta = fatorial(n);

    printf("%d", resposta);

}