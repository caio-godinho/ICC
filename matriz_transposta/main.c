#include<stdio.h>
#include<stdlib.h>
#include"struct.h"
#include"criar.h"
#include"ler.h"
#include"print.h"
#include"transposta.h"
#include"destruir.h"

int main(int argc, char *argv[]){ 
  int nl;
  int nc;
  scanf("%d %d", &nl, &nc);

  matriz *mtr = criar_matriz(nl, nc);
  ler_matriz(mtr);

  print_matriz(mtr);
  printf("\n");
  print_transposta(mtr);
  
  destruir_matriz(mtr);
}