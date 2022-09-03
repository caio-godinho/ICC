#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
	FILE *fd;
	fd = fopen("Docentes.tsv", "r");

	char texto[100];

	while(fgets(texto, 100, fd) != NULL){
		char *token;

		token = strtok(texto, "\t");
		while(token != NULL){
			printf("%s	", token);
			token = strtok(NULL, "\t");
		}

		//printf("\n");
	}
	fclose(fd);
}