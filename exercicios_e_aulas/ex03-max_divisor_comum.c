#include<stdio.h>

int mdc(int x, int y){

    int i = 0;

    if(x < y){
        i = x;
    }
    else{
        i = y;
    }

    while(x % i != 0 || y % i != 0){
        i--;
    }

    return i;
}

int main(int agrc, char *agrv[]){

    int a;
    scanf("%d", &a);
    int b;
    scanf("%d", &b);

    printf("%d", mdc(a, b));
}   