#include<stdio.h>

int main(int argc, char *argv[]){
    int x = 10;
    int *p1;

    p1 = &x;

    printf("%d\n", x);
    printf("%d\n", *p1);

    *p1 = 2;

    printf("%d\n", x);
    printf("%d\n", *p1);
    
    x = 0;

    printf("%d\n", x);
    printf("%d\n", *p1);

    int y = 78;
    p1 = &y, &x;

    printf("%d\n", x);
    printf("%d\n", *p1);
    printf("%d\n", y);

    *p1 = 23;
    
    printf("%d\n", x);
    printf("%d\n", *p1);
    printf("%d\n", y);
}