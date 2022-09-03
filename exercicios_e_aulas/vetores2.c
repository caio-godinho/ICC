#include<stdio.h>
int main(int argc, char *argv[]){
    
    int DiasNoMes[] = {30, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for(int i = 0; i < 12; i++){
        printf("%d ", DiasNoMes[i]); 
    }
}