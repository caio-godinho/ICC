#include"struct.h"
#include"stdio.h"

void ler_matriz(matriz *m){
  for(int i = 0; i < m->nLin; i++){
    for(int j = 0; j < m->nCol; j++){
      scanf("%d", &m->vals[i][j]);
    }
  }
}