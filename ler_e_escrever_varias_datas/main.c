#include<stdio.h>
#include<stdlib.h>
#include"struct.h"
#include"invalida.h"
#include"dia.h"
#include"mes.h"
#include"ano.h"

int main(int argc, char *argv[]){ 
    int n;
    scanf("%d", &n);
 
    data *p;
    p = malloc(n * sizeof(data));

    for(int i = 0; i < n; i++){
       scanf("%d/%d/%d", &(p + i)->dia, &(p + i)->mes, &(p + i)->ano);
    }

    for(int i = 0; i < n; i++){
        if(data_invalida(p + i) == 1){
            printf("DATA INVALIDA\n");
            continue;
        }

        dia(p + i);
        mes(p + i);
        ano(p + i);
    }
    free(p);
}