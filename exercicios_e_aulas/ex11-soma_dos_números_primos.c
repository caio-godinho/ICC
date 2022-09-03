#include <stdio.h>

int main(int argc, char *argv[]){
    int n;
    scanf("%d", &n);
    int soma = 0;

    for (int i = 2; i <= n; i++){

        for (int k = 2; k < i; k++){

            if (i % k == 0){

                soma -= i;
                break;
            }
        }
        soma += i;
    }
    printf("%d", soma);
}    