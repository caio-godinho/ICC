#include"struct.h"

int bissexto(int ano){
   if(ano % 100 == 0 && ano % 400 == 0){
      return 1;
   }else if (ano % 4 == 0 && ano % 100 != 0){
       return 1;
   }else{
      return 0;
   }
}

int data_invalida(data *p){
    if(p->dia > 31 || 
         p->dia < 1 ||
        (p->dia == 31 && (p->mes == 2 || p->mes == 4 || p->mes == 6 || p->mes == 9 || p->mes == 11))||
        (p->dia == 30 && p->mes == 2)||
        p->mes > 12 ||
        p->mes < 1 ||
        p->ano < 1 ||
        p->ano > 9999 ||
        (p->dia == 29 && p->mes == 2 && (bissexto(p->ano) == 0)) ){
            return 1;
        }else{
            return 0;
        }
}