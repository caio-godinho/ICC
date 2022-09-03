#include<stdio.h>

int main(int argc, char *argv[]){
    int i;
    int j;
    scanf("%d", &i);
    scanf("%d", &j);

    int quadrante[i][j];

    for(int k = 0; k < i; k++){//PREDEFINIÇÃO DOS ELEMENTOS DA MATRIZ
        for(int c = 0; c < j; c++){
            if(k == (i - 1) && c == 0 || k == 0 && c == (j - 1)){
                quadrante[k][c] = 0;
            }else{
            quadrante[k][c] = 1;
            }
        }
    }

    char p;

    do{//ENTRADA
        int linha;
        int coluna;
        int custo;
        scanf("%d", &linha);
        scanf("%d", &coluna);
        scanf("%d%c", &custo, &p);
        quadrante[linha][coluna] = custo;
    }while(p != '\n' && !feof(stdin));

    for(int k = 0; k < i; k++){//PRINT DA MATRIZ
        for(int c = 0; c < j; c++){
            printf("%d ", quadrante[k][c]);
        }
        printf("\n");
    }

    int cont = 0;
    int x = i - 1;
    int y = 0;

    while(x != 0 || y != j - 1){
       if(y < j - 1){
          if(quadrante[x][y + 1] <= quadrante[x + 1][y]){
             y++;
             cont += quadrante[x][y + 1];
             //y++;
          }else{
             x--;
             cont += quadrante[x + 1][y];
             //x--;
          }
       }else{
          x--;
          cont += quadrante[x + 1][y];
          //x--;
       }
    }
    printf("%d %d %d", cont, x, y);
}
