#include<stdio.h>

int main(int argc, char *argv[]){
    int a;
    scanf("%d", &a);
    int b;
    scanf("%d", &b);
    int potencia = 1;

    for (int i = 1; i <= b; i++){
        potencia *= a;
    }

    printf("%d", potencia);
}