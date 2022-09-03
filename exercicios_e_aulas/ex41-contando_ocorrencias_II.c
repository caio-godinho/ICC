#include<stdio.h>

int main(int argc, char *argv[]){
    int n; 
    scanf("%d", &n);
    int list[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &list[i]);
    }

    int x;
    scanf("%d", &x);
    int cont = 0;

    for(int i = 0; i < n; i++){
        if(x == list[i]){
            cont++;
        }
    }

    printf("%d", cont);
}