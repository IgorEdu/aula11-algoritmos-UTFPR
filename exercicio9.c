/* 9. Faça um programa que dado 2 palavras, determine:
a) Se as palavras são iguais;
b) Caso as palavras sejam diferentes, qual delas tem maior comprimento (não esquecer a
possibilidade de existirem palavras diferentes de mesmo tamanho);*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXIMO_STRING 20

int main(){
    char STR1[MAXIMO_STRING], STR2[MAXIMO_STRING];
    int chamadaMenu, i, iguais;
    i = chamadaMenu = iguais = 0;

    do{
      if(chamadaMenu != 0){
        printf("A string digitada excede o tamanho maximo permitido que eh 20 caracteres.\n");
        printf("Digite novamente.\n");
      }
      printf("Digite a primeira string com no maximo 20 caracteres:\n");
      gets(STR1);
      chamadaMenu++;
    }while(strlen(STR1) >= MAXIMO_STRING);

    chamadaMenu = 0;

    do{
      if(chamadaMenu != 0){
        printf("A string digitada excede o tamanho maximo permitido que eh 20 caracteres.\n");
        printf("Digite novamente.\n");
      }
      printf("Digite a segunda string com no maximo 20 caracteres:\n");
      gets(STR2);
      chamadaMenu++;
    }while(strlen(STR2) >= MAXIMO_STRING);


    if(strlen(STR1) == strlen(STR2)){
        printf("As duas palavras possuem o mesmo tamanho.\n");
        for(i = 0; i<=strlen(STR1); i++){
            if(STR1[i] == STR2[i])
                iguais = 1;
            else{
                iguais = 0;
            }
        }
        if(iguais == 1){
            printf("As duas palavras sao iguais.\n");
        }
    } else if(strlen(STR1) > strlen(STR2)){
        printf("A primeira palavra digitada eh a maior palavra.\n");
        puts(STR1);
    } else{
        printf("A segunda palavra digitada eh a maior palavra.\n");
        puts(STR2);
    }

    system("pause");
    return 0;
}
