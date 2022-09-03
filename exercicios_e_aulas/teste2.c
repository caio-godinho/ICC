#include<stdio.h>
#include<stdlib.h>

void ler_matriz(int **mtr, int n, int m){
   for(int i = 0; i < n; i++){
        for(int k = 0; k < m; k++){
            scanf("%d", &*(mtr + k + (i*n)));
        }
    }
}

void print_matriz(int **mtr, int n, int m){
   for(int i = 0; i < n; i++){
        for(int k = 0; k < m; k++){
            printf("%d ", *(mtr + k + (i*n)));
        }
        printf("\n");
    }
}

void print_matriz_transposta(int **mtr, int n, int m){
   for(int i = 0; i < m; i++){
        for(int k = 0; k < n; k++){
            printf("%d ", *(mtr + (k*m) + i));
        }
        printf("\n");
    }
}

int main(int argc, char *argv[]){
    int n;
    scanf("%d", &n);
    int m;
    scanf("%d", &m);

    int **mtr = malloc(sizeof(int) * n);
    if(mtr == NULL){
       return -1;
    }

    for(int i = 0; i < n; i++){
      mtr[i] = malloc(sizeof(int) * m);
         if(mtr[i] == NULL){
            return -1;
      }
    }

    ler_matriz(mtr, n, m);

    print_matriz(mtr, n, m);
   
    printf("\n");

    print_matriz_transposta(mtr, n, m);
    
    for(int i = 0; i < n; i++){
      free(mtr[i]);
    }
    free(mtr);
}