#include<stdio.h>
int main(void){
int atividades; 
float amortizacao;
float notai=0;
int peso=0;
float soma=0;
int somapeso =0;
scanf("%d", &atividades);
scanf("%f", &amortizacao);
for (int i=1;i<=atividades;i++){
    scanf("%d", &peso);
    scanf("%f", &notai);
    somapeso += peso;
    soma += (peso)/(notai+amortizacao);
}
float notafinal= ((somapeso)/(soma)) -amortizacao;
printf("%.1f\n", notafinal);
}