#include<stdio.h>

int main(int argc, char *argv[]){
    int n;
    scanf("%d", &n);
    int list[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &list[i]);
    }

    for(int i = 1; i <= n; i++){
        printf("%d ", list[n - i]);
    }
}