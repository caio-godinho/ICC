#include<stdio.h>
#include "b2.h"

int main(int argc, char *argv[]){

    int list[12][2];
    
    for(int i = 0; i < 12; i++){
        list[i][0] = -1;
        list[i][1] = -1;
    }

    for(int i = 0; i < 12; i++){
        if(i < 10){
            scanf("%d", &list[i][0]);

            if(list[i][0] != 10){
                scanf("%d", &list[i][1]);
            }
            else{
                list[i][1] = 0;
            }
        }
        else{
            if(list[9][0] == 10){
                scanf("%d", &list[i][0]);
            }
            else if(list[9][0] + list[9][1] == 10){
                scanf("%d", &list[10][0]);
                break;
            }
        }
    }
    
    placar(list);
    printf("\n%d", points(list));
}