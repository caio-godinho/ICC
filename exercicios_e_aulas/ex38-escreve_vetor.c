#include<stdio.h>

int main(int argc, char *argv[]){
    int n;
    scanf("%d", &n);

    int vector[n];

    for(int i = 0; i < n; i++){
        int value;
        scanf("%d", &value);

        vector[i] = value;
    }

    for(int i = 0; i < n; i++){
        printf("%d ", vector[i]);
    }
}