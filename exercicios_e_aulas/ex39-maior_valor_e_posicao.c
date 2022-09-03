#include<stdio.h>
//Não precisava de vetor, muito menos de função pra fazer isso, mas eu vou usar pra praticar.

int bigger(int v[], int n){

    int bigger;

    for(int i = 0; i < n; i++){
        if(i == 0){
            bigger = v[i];
        }
        else{
            if(v[i] > bigger){
                bigger = v[i];
            }
        }
}
    return bigger;
}

int position(int v[], int n){
        int bigger;
    int position;

    for(int i = 0; i < n; i++){
        if(i == 0){
            bigger = v[i];
            position = i;
        }
        else{
            if(v[i] > bigger){
                bigger = v[i];
                position = i;
            }
        }
}
    return position;
}

int main(int argc, char *argv[]){

    int n;
    scanf("%d", &n);

    int vector[n];

    for(int i = 0; i < n; i++){
        int value;
        scanf("%d", &value);

        vector[i] = value;
}

    printf("%d\n%d\n", bigger(vector, n), position(vector, n));
}