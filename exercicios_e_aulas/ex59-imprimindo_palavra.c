#include<stdio.h>

int main(int argc, char *argv[]){
    char palavra[100];

    fgets(palavra, 100, stdin);

    int i = 0;
    while(palavra[i] != '\0'){
        if(palavra[i + 1] != '\0'){
            printf("%c ", palavra[i]);
        }else{
            printf("%c", palavra[i]);
        }
        i++;
    }
}