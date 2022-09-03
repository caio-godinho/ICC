#include<stdio.h>

int SomaVetor(int n, int arr[]){
    int soma = 0;
    for(int i = 0; i < n; i++){
        soma += arr[i];
    }
    return soma;
}

int main(int argc, char *argv[]){
    int n;
    scanf("%d", &n);
    //declarar vetor que possui "n" posições.
    int valor[n];
    
    for(int i = 0; i < n; i++){
        // Inserir n valores no vetor, cada um numa posição i.
        scanf("%d", &valor[i]);
    }
    
    //Chamando a função SomaVetor, introduzindo os parâmetros "n" e "valor"(SEM COLCHETES).
    int soma = SomaVetor(n, valor);
    int media = soma / n;
    int MaiorQueMedia = 0;

    for(int i = 0; i < n; i++){
        if(valor[i] > media){
            MaiorQueMedia++;
        }
    }
    printf("%d\n", MaiorQueMedia);
}