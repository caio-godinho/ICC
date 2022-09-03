#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char *seleciona_coluna(char *line, int num){
    const char *tok;

    for (tok = strtok(line, "\t"); tok && *tok; tok = strtok(NULL, "\t\n")){
        if (!--num)
            return tok;
    }
    return NULL;
}



int main(){
    char select[100];
    int k = 0;
    char i[50];
    char col1[50] = " ", *tok1;
    char col2[50] = " ", *tok2;
    char col3[50] = " ", *tok3;
    char col4[50] = " ", *tok4;
    char col5[50] = " ", *tok5;
    char file1[50];
    char file2[50];
    char file3[50];
    while(scanf("%s", i)){
        printf("You've written: %s\n", i);
        if(strcmp(i, "from")==0){
          
          /*printf("%s", i);
          while(strcmp(i, "where")!=0){
            scanf("%s", i);
            if (j == 1){
              strcpy(file1,i);
            }
            if (j == 2){
              strcpy(file2,i);
            }
            if (j == 3){
              strcpy(file3,i);
            }
            j++;
            
          }*/
          break;
          
        }
        
        if (k == 1){
          
          tok1 = strtok(i, ".");
          strcpy(file1, tok1);
          tok1 = strtok(NULL, ", ");
          strcpy(col1,tok1);
        }
        else if (k == 2){
          
          tok2 = strtok(i, ".");
          tok2 = strtok(NULL, ", ");
          strcpy(col2,tok2);
          
        }
        else if (k == 3){
          tok3 = strtok(i, ".");
          tok3 = strtok(NULL, ", ");
          strcpy(col3,tok3);
          
        }
        else if (k == 4){
          tok4 = strtok(i, ".");
          tok4 = strtok(NULL, ", ");
          strcpy(col4,tok4);
          
        }
        else if (k == 5){
          tok5 = strtok(i, ".");
          tok5 = strtok(NULL, ", ");
          strcpy(col5,tok5);
          
        }
        
        //if(strcmp(i, "where")==0){
          //break;
        //}
        
        k++;
    }
    printf ("%s %s %s %s %s %s\n", col1, col2, col3, col4, col5, file1);

    //free(tok1);
    const char ch[] = ".tsv";
    strncat(file1, ch, 5);
    int x;
    FILE *fd = fopen(file1, "r");

    if(strcmp(col1, "Sigla")==0){
      x = 4;
    }
    //if(strcmp(col2, "Nome")==0){
      //x = 6;
    //}
    
    char line[1024];
    int j = 0;

    while (fgets(line, 1024, fd)){
        if(j > 0){//nao imprime a palavra "Nome"
            printf("%s\n", seleciona_coluna(line, x));
        }
        j++;
    }
    fclose(fd);
}