#include<stdio.h>

int main(int argv, char *argc[]){
    int L;
    scanf("%d", &L);
    double M;
    scanf("%lf", &M);
    double A;
    scanf("%lf", &A);
    int V;
    scanf("%d", &V);
    double multa;

    if(V > L){
        double diff = V - L;
        multa = M + (A * diff);
    }else{
        multa = 0.00;
    }

    printf("%.2lf", multa);
    

}