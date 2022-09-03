#include<stdio.h>

int main(int argc, char *argv[]){
    int n;
    int maior;    
    
    for(int i = 0; i <= 2; i++){
        scanf("%d", &n);
            
            if(i == 0){
                maior = n;
            }else{
                if(n > maior){
                    maior = n;
                }
            }
    }
    printf("%d", maior);
    
}