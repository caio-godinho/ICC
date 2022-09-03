#include<stdio.h>
//Divisão int/int é inteira. 
//Divisão float/float, float/int, int/float é float. O mesmo vale para double.
//Cast (float) transforma o próximo número/expressão em float. (float)(x/y) apenas transforma o resultado da divisão em float.

int main(int argv, char *argc[]){

float n1 = 97/98;
printf("%f\n", n1);

float n2 = (float)(97/98); //(float)(x/y) transforma apenas o resultado da divisão em float.
printf("%f\n", n2);

float n3 = (float)97/98; // ou float n2 = 5.0/3
printf("%.9f\n", n3);

double n4 = 97.0/98;
printf("%.9lf\n", n4);

printf("%d\n", sizeof(float));
printf("%d\n", sizeof(double));
printf("%d\n", sizeof(long double));
}