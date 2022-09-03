#include <stdio.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    int c;
    scanf("%d", &c);
    int m;
    scanf("%d", &m);

    int qnt = n / c;

    int emb = qnt;

    while (emb >= m) {
        qnt += 1;
        emb += 1;
        emb -= m;
    } 
    printf("%d", qnt);

}