#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
 
   int dia[100];
   int mes[100];
   int ano[100];

    for(int i = 0; i < n; i++){
       scanf("%d/%d/%d", &dia[i], &mes[i], &ano[i]);
    }

    fprintf(stderr,"%d\n", n);
    for(int i = 0; i < n; i++){
        fprintf(stderr,"%d/%d/%d\n", dia[i], mes[i], ano[i]);
    }
}