#include<stdio.h>
#include<stdlib.h>
#include"struct.h"
#include"funcoes.h"

int main(int argc, char *argv[]){
    vetor *a = retorna_vetor();
    vetor *b = retorna_vetor();

    vetor *vi = vetor_intercalado(a, b);

    print_vetor(vi);

    destruir_vetor(a);
    destruir_vetor(b);
    destruir_vetor(vi);
}