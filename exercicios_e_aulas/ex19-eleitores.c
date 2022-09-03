#include<stdio.h>

int main(int argc, char *argv[]){
    int age;
    scanf("%d", &age);

    if(age == 16 || age == 17){
        printf("FACULTATIVO");
        
    }else if(age > 17 && age < 70){
        printf("OBRIGATORIO");

    }else{
        printf("DISPENSADO");
    }
}