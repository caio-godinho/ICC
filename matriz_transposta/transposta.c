#include<stdio.h>
#include"struct.h"

void print_transposta(matriz *m){
  for(int i = 0; i < m->nCol; i++){
    for(int j = 0; j < m->nLin; j++){
      printf("%d ", m->vals[j][i]);
    }
    printf("\n");
  }
}