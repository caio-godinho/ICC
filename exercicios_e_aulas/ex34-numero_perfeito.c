#include<stdio.h>

int perfect_number(int x){
    int soma = 0;
    int i = 1;

    while(i != x){
        if(x % i == 0){
            soma += i;
        }

        i++;
    }

    return soma;
    
}

int main(int argc, char *argv[]){
    int n;
    scanf("%d", &n);

    if(perfect_number(n) == n){
        printf("S");
    }
    else{
        printf("N");
    }
}