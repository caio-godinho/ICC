#include<stdio.h>

int main(int argc, char *argv[]){
    int n;
    scanf("%d", &n);

    int list[n];

    int sequence = 1;
    int maxseq = 1;

    for(int i = 0; i < n; i++){
        scanf("%d", &list[i]);

        if(i >= 1){
            if(list[i] >= list[i - 1]){
                sequence ++;

                    if(sequence > maxseq){
                        maxseq = sequence;
                    }
            }
            else{
                sequence = 1;
            }
        }
    }
    printf("%d", maxseq);
}