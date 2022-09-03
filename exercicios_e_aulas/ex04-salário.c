#include<stdio.h>

float total(float x, float y){

    float comissao = 0.18 * y;

    float tot = comissao + x;

    return tot;
}

int main(int argc, char *argv[]){

    float salario;
    scanf("%f", &salario);
    float vendas;
    scanf("%f", &vendas);

    float resultado = total(salario, vendas);

    printf("%.2f", resultado);
}