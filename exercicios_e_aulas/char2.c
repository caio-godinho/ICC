#include<stdio.h>

int main(int argc, char *argv[]){

    //char str[] = {'C', 'a', 'i', 'o', '\0'};
    char str[] = "Caio";
    printf("%s\n", str); 

    int i = 0;

    while(str[i] != '\0'){ // Ou   while(str[i]){}.  Significado de '\0' no final.
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] += ('A' - 'a');
        }
    i++;
    printf("Eu sou %s\n", str);
    }

    printf("%s\n", '\0'); //'\0' é a string que significa nulo.
}