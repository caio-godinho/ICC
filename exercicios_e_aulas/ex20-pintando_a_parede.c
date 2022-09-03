#include<stdio.h>
#include<math.h>

float area(float l, float h){
    float area = l * h;

    return area;
}

int quantidade(float r, float l, float h){
    float a = area(l, h);
    int quant = ceil(a / r);

    return quant;
}

float custo(int q, float c){
    float price = q * c;

    return price;
}


int main(int argc, char *argv[]){
    float l;
    scanf("%f", &l);
    float h;
    scanf("%f", &h);
    float c;
    scanf("%f", &c);
    float r;
    scanf("%f", &r);

    int latas = quantidade(r, l, h);
    float price = custo(latas, c);

    printf("%d\n%.2f", latas, price);
}