#include<stdio.h>

int main(int argc, char *argv[]){
    int x;
    int soma  = 0;

    while(1){ //ou for(;;)
        scanf("%d", &x);

        if(x == 0){
            break;
        }

        soma += x;
    }

    printf("%d", soma);
}