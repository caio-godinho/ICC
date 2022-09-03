#include<stdio.h>

int main(int argc, char *argv[]){
    int n;
    scanf("%d", &n);
    int m;
    scanf("%d", &m);

    int matriz[n][m];

    for(int i = 0; i < n; i++){
        for(int k = 0; k < m; k++){
            scanf("%d", &matriz[i][k]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int k = 0; k < m; k++){
            printf("%d ", matriz[i][k]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < m; i++){
        for(int k = 0; k < n; k++){
            printf("%d ", matriz[k][i]);
        }
        printf("\n");
    }
}