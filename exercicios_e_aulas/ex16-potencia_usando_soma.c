#include<stdio.h>

int main(int argc, char *argv[]){
    int a;
    scanf("%d", &a);
    int b;
    scanf("%d", &b);
    int potencia = a;
    int soma = a;

    if(b == 0){
        printf("%d", 1);
    } else{
        for (int i = 1; i < b; i++){
            for(int k = 1; k < a; k++){
                potencia += soma;
            }

            soma = potencia;
        }

        printf("%d", potencia);
    }
}