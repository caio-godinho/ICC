#include<stdio.h>

int main(int argc, char *argv[]){ 

    //*printf("%d", 2 147 483 647); 
        //Esse é o número máximo que o tipo int aceita. O menor número é -2 147 483 648.
        // do 2 147 483 647 ao -2 147 483 648 temos 2^32 números, ou seja, o int tem 32 bits.

    //*Utiliza-se modificadores(long, short e unsigned) para alterar a quantidade de números abrangidos pelos tipos básicos(int, char, e void).

    unsigned int x = 2147483648;
    printf("unsigned: %u   ", sizeof(unsigned int));
    printf("%u\n", x);
        //Não considera números negativos, ou seja, a quantidade de números positivos duplica.
        //signed int x = int x
        //unsingned long long também existe.

    //*long int x > int x; //Geralmente, (long int) > (int), mas compilador não é confiável para alterar a quantidade de bits. Isso vale para todods os tipos básicos.

    printf("int: %d   ", sizeof(int));
    printf("%d\n", x);

    printf("long: %ld   ", sizeof(long int));
    printf("%ld\n", x);

    printf("long long: %lld   ", sizeof(long long int));
    printf("%lld\n", x); 

    printf("short: %d\n", sizeof(short int));

    printf("char: %d\n", sizeof(char));//Creio que "%s\n" ou "%c\n" não existam.

    printf("void: %d\n", sizeof(void));

    // O tamanho (sizeof()) é dado em bytes (1 byte = 8 bits).
        // 1 bit = uma casa binária.
        // Exemplo: quantos números pode-se representar com 4 bits?
        // Resposta: "0001" é um número com 4 bits, assim como "1111", portanto a resposta é 2^4 = 16.

    void Alo()//Ou void Alo(void)
    {
        printf("Salve");
    }
    //Função com tipo void não tem retorno.
    //Em  void *p  ,o "*" significa "criar um ponteiro para void".
    
    Alo();

     

}