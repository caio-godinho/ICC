#include<stdio.h>

int main(int argc, char *argv[]){

    int ano;
    scanf("%d", &ano);

    if (ano <= 0){
        printf("-1");
    }

    else{

        if (ano % 4 == 0 && ano % 100 != 0){
            printf("1");
        }
    
        else{
            printf("0");
        }
    }
}