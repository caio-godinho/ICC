#include<stdio.h>
#include<stdlib.h>
#include"struct.h"

vetor *cria_vetor(int tamanho){
    vetor *v = malloc(sizeof(vetor) * 1);
    if(v == NULL){
        fprintf(stderr, "deu ruim");
    }
    v->len = tamanho;
    v->vals = malloc(sizeof(int) * tamanho);
    if(v->vals == NULL){
        free(v);
        fprintf(stderr, "deu ruim");
    }
    return v;
}


void ler_vetor(vetor *v){
    for(int i = 0; i < v->len; i++){
        scanf("%d", &v->vals[i]);
    }
}


vetor *retorna_vetor(void){
    int x;
    scanf("%d", &x);
    vetor *v = cria_vetor(x);
    ler_vetor(v);

    return v;
}


vetor *vetor_intercalado(vetor *a, vetor *b){
    int s = (a->len) + (b->len);
    vetor *c = cria_vetor(s);

    int contA = 0; 
    int contB = 0;
    int contC = 0;
    
    while(contC != s){
        if(a->vals[contA] <= b->vals[contB] && contA != a->len || (contB == b->len)){
            c->vals[contC] = a->vals[contA];
            contA++;
        }else{
            c->vals[contC] = b->vals[contB];
            contB++;
        }
        contC++;
    }
    return c;
}


void print_vetor(vetor *v){
    for(int i = 0; i < v->len; i++){
        printf("%d ", v->vals[i]);
    }
}


void destruir_vetor(vetor *v){
    free(v->vals);
    free(v);
}