#include<stdio.h>

void placar(int list[][2]){
    for(int i = 0; i < 12; i++){
        if(list[i][0] == 10 && i < 9){
            printf("X _ ");
        }
        else if(list[i][0] == 10 && i >= 9){
            printf("X ");
        }
        else if(list[i][0] + list[i][1] == 10){
            printf("%d / ", list[i][0]);
        }
        else if(i >= 10){
            if(list[10][0] + list[11][0] == 10){
                printf("%d /", list[10][0]);
                break;
            } 
            else{
                if(list[i][0] != -1 && list[i][0] != 10){
                printf("%d ", list[i][0]);
                }
            }
        } 
        else{ 
            printf("%d ", list[i][0]);
            printf("%d ", list[i][1]);
        }

        if(i < 9){
            printf("| ");
        }
    }
}

int points(int list[][2]){
    int points = 0;

    for(int i = 0; i < 12; i++){
        if(list[i][1] != -1){
            if(list[i][0] == 10){
                if(list[i + 1][0] != 10){
                    if(i < 9){
                        points += 10 + list[i + 1][0] + list[i + 1][1];
                        }
                    else{
                        points += 10 + list[i + 1][0] + list[i + 2][0];
                        }
                }
                else{
                    points += 10 + 10 + list[i + 2][0];
                }
            }

            else if(list[i][0] + list[i][1] == 10){
                points += 10 + list[i + 1][0];
            }

            else{
                points += list[i][0] + list[i][1];
            }
        }
    }
    return points;
}

int main(int argc, char *argv[]){

    int list[12][2];
    
    for(int i = 0; i < 12; i++){
        list[i][0] = -1;
        list[i][1] = -1;
    }

    for(int i = 0; i < 12; i++){
        if(i < 10){
            scanf("%d", &list[i][0]);

            if(list[i][0] != 10){
                scanf("%d", &list[i][1]);
            }
            else{
                list[i][1] = 0;
            }
        }
        else{
            if(list[9][0] == 10){
                scanf("%d", &list[i][0]);
            }
            else if(list[9][0] + list[9][1] == 10){
                scanf("%d", &list[10][0]);
                break;
            }
        }
    }
    
    placar(list);
    printf("\n%d", points(list));
}