#include<stdio.h>

int main(int argc, char *argv[]){
    int x;
    scanf("%d", &x);
    int y;
    scanf("%d", &y);
    int soma = 0;

    for (int i = 1; i <= y; i++){
        soma += x;
    }

    printf("%d", soma);

}