#include<stdlib.h>
#include "struct.h"

matriz *criar_matriz(int nl, int nc){
  matriz *m = malloc(sizeof(matriz) * 1);
  m->nLin = nl;
  m->nCol = nc;
  m->vals = malloc(sizeof(int *) * nl);
  for(int i = 0; i < nl;  i++){
    m->vals[i] = malloc(sizeof(int) * nc);
    for(int j = 0; j < nc; j++){
      m->vals[i][j] = 0;
    }
  }
  return m;
}