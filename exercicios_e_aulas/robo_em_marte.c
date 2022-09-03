#include<stdio.h>

void predefinindo(int quadrante[][20], int i, int j){
   for(int k = 0; k < i; k++){
        for(int c = 0; c < 20; c++){
            if((k == (i - 1) && c == 0) || (k == 0 && c == (j - 1))){
                quadrante[k][c] = 0;
            }else{
            quadrante[k][c] = 1;
            }
        }
    }
}

void entrada(int quadrante[][20]){
   int linha;
   int coluna;
   int custo;
    while(!feof(stdin)){
        scanf("%d", &linha);
        scanf("%d", &coluna);
        scanf("%d", &custo);
        quadrante[linha][coluna] = custo;
    }
}

void percurso(int *x, int *y, int *acm, int j, int quadrante[][20]){
   while(*x != 0 || *y != j - 1){
       if ((*y < j-1 && *x != 0 && quadrante[*x - 1][*y] == 99 && quadrante[*x][*y + 1] == 99) || 
           (*y == j-1 && quadrante[*x - 1][*y] == 99) || 
           (*x == 0 && quadrante[*x][*y + 1] == 99)){//CASOS EM QUE ROBO NAO PODE MAIS SE MOVER
          break;
       
       }else if(*y < j - 1){//SE O ROBO NÃO CHEGOU À ÚLTIMA COLUNA
          if(quadrante[*x][*y + 1] <= quadrante[*x - 1][*y]){//SE ELEMENTO À DIREITA É MENOR OU IGUAL AO ELEMENTO ACIMA
             (*y)++;
             *acm += quadrante[*x][*y];
          }else if(*x == 0){//SE O ROBO ESTÁ NA PRIMERA LINHA 
               (*y)++;
               *acm += quadrante[*x][*y];
          }else{//SE O ELEMENTO ACIMA É MENOR QUE O À DIREITA E O ROBO NÃO CHEGOU À PRIMEIRA LINHA
             (*x)--;
             *acm += quadrante[*x][*y];
          }
       
       }else{//SE O ROBO CHEGOU À ULTIMA COLUNA
          (*x)--;
          *acm += quadrante[*x][*y];
       }
    }
}


int main(int argc, char *argv[]){ 
    int i;
    int j;
    scanf("%d", &i);
    scanf("%d", &j);

    int quadrante[i][20];

   predefinindo(quadrante, i, j);
   entrada(quadrante);

    int acm = 0;//ACUMULADOR DO CUSTO
    int x = i - 1;//LINHA EM QUE ROBO SE ENCONTRA
    int y = 0;//COLUNA EM QUE ROBO SE ENCONTRA

   percurso(&x, &y, &acm, j, quadrante);
   
    if(x == 0 && y == j - 1){
      printf("%d\n%d", acm, 1);
    }else{
       printf("%d\n%d", acm, 0);
    }
}