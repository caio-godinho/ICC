#include <stdio.h>

void tabuleiro(int matriz[][4]) {
  for (int i = 0; i < 4; i++){
    for (int j = 0; j < 4; j++){
      matriz[i][j] = '-';
    }
  }  
}

void recebe_pecas(int peca, int posicao, int matriz[][4]){
  int i = 0;
  int j = 0;

  while (posicao >= 4){
    posicao = posicao - 4;
    i++;
  }

  j = posicao;
  matriz[i][j] = peca; 
}

int verifica_linha(int matriz[][4]){
  int linha_completa = 0;
  int i, j;

  for (i = 0; i < 4; i++){
    for (j = 0; j < 4; j++){
      if (matriz[i][j] != '-'){
        linha_completa++;
      } 
    }
    if (linha_completa == 4){ 
      for (int k = 0; k <= 3; k++){
        int a = matriz[i][0] & (1 << k);
        int b = matriz[i][1] & (1 << k);
        int c = matriz[i][2] & (1 << k);
        int d = matriz[i][3] & (1 << k);

        if (a == b && a == c && a == d){
          return i + 1;
        }
      }
    }
    linha_completa = 0;
  }
  return 0;
}

int verifica_coluna(int matriz[][4]){
  int coluna_completa = 0;

  for (int j = 0; j < 4; j++){
    int i = 0;
    for (i = 0; i < 4; i++){
      if (matriz[i][j] != '-'){
        coluna_completa++;
      } 
    }
    if (coluna_completa == 4){ 
      for (int k = 0; k <= 3; k++){
        int a = matriz[0][j] & (1 << k);
        int b = matriz[1][j] & (1 << k);
        int c = matriz[2][j] & (1 << k);
        int d = matriz[3][j] & (1 << k);

        if (a == b && a == c && a == d){
          return j + 1;
        }
      }
    }
    coluna_completa = 0;
  }
  return 0;
}


int verifica_diagonal(int matriz[][4]){
  int i = 0;
  int j = 0;
  int diag_principal = 0;
  int diag_secundaria = 0;
  while(i < 4 && j < 4){
    if (matriz[i][j] != '-'){
      diag_principal++;
    }
    i++;
    j++;
  }
  if (diag_principal == 4){
    for (int k = 0; k <= 3; k++){
      int a = matriz[0][0] & (1 << k);
      int b = matriz[1][1] & (1 << k);
      int c = matriz[2][2] & (1 << k);
      int d = matriz[3][3] & (1 << k);

      if (a == b && a == c && a == d){
        return 1;
      }
    }
  }
  
  j = 3;
  i = 0;
  while(i < 4 && j >= 0){
    if (matriz[i][j] != '-'){
      diag_secundaria++;
    }
    i++;
    j--;
  }
  if (diag_secundaria == 4){
    for (int k = 0; k <= 3; k++){
      int a = matriz[0][3] & (1 << k);
      int b = matriz[1][2] & (1 << k);
      int c = matriz[2][1] & (1 << k);
      int d = matriz[3][0] & (1 << k);

      if (a == b && a == c && a == d){
        return 2;
      }
    }
  }
  return 0;
}  

void impressao_posicoes (int tipo_vitoria, int posicao_vitoriosa){
  if (tipo_vitoria == 1) {
    if (posicao_vitoriosa - 1 == 0) printf("0123");
    if (posicao_vitoriosa - 1 == 1) printf("4567");
    if (posicao_vitoriosa - 1 == 2) printf("89AB");
    if (posicao_vitoriosa - 1 == 3) printf("CDEF");
  }
  else if (tipo_vitoria == 2) {
    if (posicao_vitoriosa - 1 == 0) printf("048C");
    if (posicao_vitoriosa - 1 == 1) printf("159D");
    if (posicao_vitoriosa - 1 == 2) printf("26AE");
    if (posicao_vitoriosa - 1 == 3) printf("37BF");
  }
  else { 
    if (posicao_vitoriosa - 1 == 0) printf("05AF");
    if (posicao_vitoriosa - 1 == 1) printf("369C");
  }
}

void impressao_carac(int k, int a){
  if (k == 3) {
    if (a == 0) printf("branca");
      else printf("escura");
      return;
    }
    else if (k == 2) {
      if (a == 0) printf("grande");
      else printf("pequena");
      return;
    }
    else if (k == 1){
      if (a == 0) printf("circular");
      else printf("quadrada");
      return;
    }
    else {
      if (a == 0) printf("solida");
      else printf("oca");
      return;
    }
}

void verifica_carac (int tipo_vitoria, int posicao_vitoriosa, int matriz[][4]){
  int i = posicao_vitoriosa - 1;
  if (tipo_vitoria == 1) {
    for (int k = 3; k >= 0; k--){
        int a = matriz[i][0] & (1 << k);
        int b = matriz[i][1] & (1 << k);
        int c = matriz[i][2] & (1 << k);
        int d = matriz[i][3] & (1 << k);

        if (a == b && a == c && a == d){
          impressao_carac(k, a);
          return;
        }
      }
      
  } else if (tipo_vitoria == 2) {
    for (int k = 3; k >= 0; k--){
        int a = matriz[0][i] & (1 << k);
        int b = matriz[1][i] & (1 << k);
        int c = matriz[2][i] & (1 << k);
        int d = matriz[3][i] & (1 << k);

        if (a == b && a == c && a == d){
          impressao_carac(k, a);
          return;
        }
      }

  } else {
    if (posicao_vitoriosa == 1){
      for (int k = 3; k >= 0; k--){
      int a = matriz[0][0] & (1 << k);
      int b = matriz[1][1] & (1 << k);
      int c = matriz[2][2] & (1 << k);
      int d = matriz[3][3] & (1 << k);

        if (a == b && a == c && a == d){
          impressao_carac(k, a);
          return;
        }
      }
    }
    else {
      for (int k = 3; k >= 0; k--){
        int a = matriz[0][3] & (1 << k);
        int b = matriz[1][2] & (1 << k);
        int c = matriz[2][1] & (1 << k);
        int d = matriz[3][0] & (1 << k);

        if (a == b && a == c && a == d){
          impressao_carac(k, a);
          return;
        }
      }
    }
  }
}


int main(int argc, char *argv[]) {
  int peca;
  int posicao; 
  int matriz[4][4];
  tabuleiro(matriz);
  int jogador = 0;
  int tipo_vitoria = 0;
  int posicao_vitoriosa = 0;
  
  for (int rodadas = 0; rodadas < 16; rodadas++){
    scanf("%x", &peca);
    scanf("%x", &posicao);
    recebe_pecas(peca, posicao, matriz);

    if (rodadas >= 3) {
      if ((posicao_vitoriosa = verifica_linha(matriz))){
        tipo_vitoria = 1;
        break;
      }
      if ((posicao_vitoriosa = verifica_coluna(matriz))){
        tipo_vitoria = 2;
        break;
      }      
      if ((posicao_vitoriosa = verifica_diagonal(matriz))){
        break;
      }
    }
    jogador++;
  } 

  for (int i = 0; i < 4; i++){
    for (int j = 0; j < 4; j++){
      if (matriz[i][j] == '-'){
        printf("%c", matriz[i][j]);
      } else {
        printf("%X", matriz[i][j]);
      }
    }
    printf("\n");
  }

  if (jogador < 16){

    if (jogador % 2 == 0){
      printf("2\n");
    }
    else {
      printf("1\n");
    }

    impressao_posicoes(tipo_vitoria, posicao_vitoriosa);
    
    printf("\n");
    
    verifica_carac(tipo_vitoria, posicao_vitoriosa, matriz);

    printf("\n");
    
  }
  else{
    printf("0");
  }
}