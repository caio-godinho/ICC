#include<stdio.h>
#include"struct.h"

void print_matriz(matriz *m){
  for(int i = 0; i < m->nLin;  i++){
      for(int j = 0; j < m->nCol; j++){
        printf("%d ", m->vals[i][j]);
      }
      printf("\n");
  }
}