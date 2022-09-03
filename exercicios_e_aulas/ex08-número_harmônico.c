#include<stdio.h>

double harmonico(int x){
    double soma = 0;

    for(int i = 1; i <= x; i++){
        soma += (1.0/i); //1.0 que é float, ao invés de 1, que é int. Divisão int/int é igual a int. Divisão float/int é igual a float.
    }

    return soma;
}

int main(int argc, char *argv[]){
    int n;
    scanf("%d", &n);

    double resultado = harmonico(n);

    printf("%.4lf", resultado);
}

// OBS: não dá certo no run.codes com float, apenas com double, pq esse tipo consegue dar resultados mais precisos, 
// por aceitar mais dígitos.