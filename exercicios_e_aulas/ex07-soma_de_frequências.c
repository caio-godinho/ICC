#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>

// Função abs(x) de stdlib.h fornece o módulo de x
// Função fabs(x) de math fornece o mesmo.

//int soma(int x, int  y){
    //int formula = (x + y) * (abs(x - y) + 1) / 2;
    //int sm = (x + y);
    //int sb = fabs(x - y) + 1;
    //int formula = (sm * sb) / 2;
    //return formula;
//}

int sum(int m, int n){

    int adicao = 0;

    for(int i = m; i <= n; i++){
        adicao += i;
    }
    return adicao;
}

int main (int argc, char *argv[]){

    int a;
    scanf("%d", &a);
    int b;
    scanf("%d", &b);

    //int resultado = soma(a, b);
    int resultado = sum(a, b);

    printf("%d", resultado);
    //ou simplesmente prinf("%d", soma(a, b))
}