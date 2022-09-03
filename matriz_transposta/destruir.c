#include<stdlib.h>
#include"struct.h"

void destruir_matriz(matriz *m){
  for(int i = 0; i < m->nLin; i++){
    free(m->vals[i]);
  }
  free(m->vals);
  free(m);
}