#include <stdio.h>

int main (int argc, char *argv[]){
    
    int q;
    scanf("%d", &q);

    int n;
    scanf("%d", &n);

    int maior = n;
    int menor = n;
    int soma = n;

    for (int i = 0; i < q - 1; i++){

        scanf("%d", &n);

        if (n > maior){
            maior = n;
        }
        if (n < menor){
            menor = n;
        }
        soma += n;
    }

    printf ("%d\n%d\n%d" , maior, menor, soma);
}   
