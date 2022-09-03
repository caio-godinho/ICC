#include<stdio.h>

int digits(int n){
    //Descobrindo o número de dígitos.
    int digits = 0;

    while(n > 0){
        n = n / 10;

        digits++;
    }

    return digits;
}

int palindrome(int n){
    //Descobrindo os dígitos.
    int size = digits(n);

    int list[size];

    for(int i = 0; i < size; i++){
        list[i] = n % 10;

        n = n/10;
    }

    int q = size/2;

    if(size % 2 != 0){
        q++;
    }

    for(int i = 0; i < q; i++){
        if(list[i] != list[(size - 1) - i]){//só precisa rodar q vezes, mais vezes que isso é redundante.
            return 0;
        }
        else{
            if(i == size - 1){
                return 1;
            }
        }
    }
}

int main(int argc, char *argv[]){
    int n;
    scanf("%d", &n);

    if(palindrome(n) == 0){
        printf("N");
    }
    else{
        printf("S");
    }
}