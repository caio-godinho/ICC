#include<stdio.h>

int main(int argc, char *argv[]){
    char c = 'A';//O 'A' é um monte de 0 e 1 para o computador.

    printf("%d\n", c);
    printf("%c\n", c);

    for(char i = 'A'; i <= 'Z'; i++){//int i = 'A';...  Também funciona.
        printf("%d -> %c\n", i, i);
    }

    printf("%d\n", sizeof(char));
    
    char x = 'T';
    char m = x + ('a' - 'A');
    printf("%c\n", m);

} // CHECAR TABELA ASCII.