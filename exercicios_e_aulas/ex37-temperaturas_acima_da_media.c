#include<stdio.h>

int main(int argc, char *argv[]){
    int temps[7];

    float sum = 0;

    for(int i = 0; i < 7; i++){
        float t;
        scanf("%f", &t);

        temps[i] = t;

        sum += t;
    }

    float average = sum / 7;

    int cont = 0;

    for(int i = 0; i < 7; i++){
        if(temps[i] > average){
            cont++;
        }
    }

    printf("%d", cont);
}