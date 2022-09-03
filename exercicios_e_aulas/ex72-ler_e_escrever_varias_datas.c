#include<stdio.h>
#include<stdlib.h>

typedef struct{
   int dia;
   int mes;
   int ano;
} data;

int bissexto(int ano){
   if(ano % 100 == 0 && ano % 400 == 0){
      return 1;
   }else if (ano % 4 == 0 && ano % 100 != 0){
       return 1;
   }else{
      return 0;
   }
}

int main(int argc, char *argv[]){ 
    int n;
    scanf("%d", &n);
 
    data *p;
    p = malloc(n * sizeof(data));

    for(int i = 0; i < n; i++){
       scanf("%d/%d/%d", &(p + i)->dia, &(p + i)->mes, &(p + i)->ano);
    }

    for(int i = 0; i < n; i++){
      if((p + i)->dia > 31 || 
         (p + i)->dia < 1 ||
        ((p + i)->dia == 31 && ((p + i)->mes == 2 || (p + i)->mes == 4 || (p + i)->mes == 6 || (p + i)->mes == 9 || (p + i)->mes == 11))||
        ((p + i)->dia == 30 && (p + i)->mes == 2)||
        (p + i)->mes > 12 ||
        (p + i)->mes < 1 ||
        (p + i)->ano < 1 ||
        (p + i)->ano > 9999 ||
        ((p + i)->dia == 29 && (p + i)->mes == 2 && (bissexto((p + i)->ano) == 0)) ){
        printf("DATA INVALIDA\n");
        continue;
      }
       
       if((p + i)->dia < 10){
          printf("0%d de ", (p + i)->dia);
       }else{
          printf("%d de ", (p + i)->dia);
       }

       switch((p + i)->mes){
          case 1:
            printf("janeiro de ");
            break;

          case 2:
            printf("fevereiro de ");
            break;

          case 3:
            printf("marco de ");
            break;

          case 4:
            printf("abril de ");
            break;

          case 5:
            printf("maio de ");
            break;

          case 6:
            printf("junho de ");
            break;

          case 7:
            printf("julho de ");
            break;

          case 8:
            printf("agosto de ");
            break;

          case 9:
            printf("setembro de ");
            break;

          case 10:
            printf("outubro de ");
            break;

          case 11:
            printf("novembro de ");
            break;

          case 12:
            printf("dezembro de ");
            break;
       }

      if((p + i)->ano < 10){
         printf("000%d\n", (p + i)->ano);
      }else if((p + i)->ano < 100){
         printf("00%d\n", (p + i)->ano);
      }else if((p + i)->ano < 1000){
         printf("0%d\n", (p + i)->ano);
      }else{
         printf("%d\n", (p + i)->ano);
      }
    }

    free(p);
}