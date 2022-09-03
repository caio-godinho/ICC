#include <stdio.h>

int main(int agrc, char *argv[]) {

    float a;
    float b;
    float c;
    float delta;
    float soma;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    
    delta = (b*b) - (4*a*c);

    if (delta >= 0) {

        soma = -b / a;

        printf("%.2f", soma); }
        
    else {
        printf("nan");}
    }



//printf("%f %f %f", a , b , c); }
