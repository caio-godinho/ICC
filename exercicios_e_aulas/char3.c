#include<stdio.h>

int main(int argc, char *argv[]){

    char strEntrada[100];
    char strSaida[100];
    fgets(strEntrada, 100, stdin);// NÃO USAR SCANF OU GETS PARA LER STRINGS. ELES SÃO FACILMENTE HACKEADOS.

    int i = 0;

    while(strEntrada[i] != '\0'){ // Ou   while(str[i]){}
        if(strEntrada[i] >= 'a' && strEntrada[i] <= 'z'){
            strSaida[i] = strEntrada[i] + ('A' - 'a');
        } else{
            strSaida[i] = strEntrada[i];
        }

        i++;
    }
    strSaida[i] = '\0';//String deve terminar com 0.

    printf("%s\n", strEntrada);
    printf("%s\n", strSaida);
}