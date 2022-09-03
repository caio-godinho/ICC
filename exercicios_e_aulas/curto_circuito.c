#include<stdio.h>

int f (int x){
    printf("oi ");
    return x % 2;//0 == False. Qualquer outro número == True.
}

int g (int x){
    printf("ok ");
    return x % 3; //0 == False. Qualquer outro número == True.
}

int main(int argc, char *argv[]){
    int x;
    scanf("%d", &x);

    if (x > 10 && f(x) || g(x)){
        printf("beleza");
    }
}