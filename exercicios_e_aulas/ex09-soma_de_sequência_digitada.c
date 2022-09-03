#include<stdio.h>

int main(int argc, char *argv[]){

    int n = 1;
    int somapares = 0;
    int somaimpares = 0;
    int somatotal = 0;

    while(n != 0){
        scanf("%d", &n);

        somatotal += n;

        if(n % 2 == 0){
            somapares += n;
        }

        else{
            somaimpares += n;
        }

        
    }

    printf("%d\n%d\n%d", somapares, somaimpares, somatotal);
}