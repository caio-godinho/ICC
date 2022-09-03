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

    for(int i = 0; i < n; i++){
        if(x == list[i]){
            printf("%d", i);
            break;
        }
        if(i == n - 1){
            printf("%d", -1);
        }
    }
}