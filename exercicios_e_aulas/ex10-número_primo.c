#include <stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);

    if(n == 1){
        printf("0");
    }else{
        for(int i = 2; i < n; i++){
            if(n % i == 0){
                printf("0");
                return 0;
            }
        }
    printf("1");  
    }
}
