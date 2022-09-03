#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *seleciona_coluna(char *line, int num){
    char *tok;

    for (tok = strtok(line, "\t"); tok && *tok; tok = strtok(NULL, "\t\n")){
        if (!--num)
            return tok;
    }
    return NULL;
}

int main(){
    char nome[100];
    scanf ("%s", nome);
    
    FILE *fd = fopen(nome, "r");

    char line[1024];
    int i = 0;

    while (fgets(line, 1024, fd)){
        //char *tmp = strdup(line);

        if(i > 0){//nao imprime a palavra "Nome"
            printf("%s\n", seleciona_coluna(line, 1));
        }
        i++;
        // NOTE strtok clobbers tmp
        //free(tmp);
    }
    fclose(fd);
}