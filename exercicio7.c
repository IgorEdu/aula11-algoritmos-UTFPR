/*7. Faça um programa que una duas strings (sem usar a função strcat).*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXIMO_STRING 20

int main(){
    char STR1[MAXIMO_STRING], STR2[MAXIMO_STRING], STRING_CONCATENADA[MAXIMO_STRING*2];
    int i = 0;
    int cont = 0;
    int chamadaMenu = 0;

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

    for(i = 0; i < strlen(STR1); i++){
        STRING_CONCATENADA[cont] = STR1[i];
        cont++;
    }

    for(i = 0; i < strlen(STR2); i++){
        STRING_CONCATENADA[cont] = STR2[i];
        cont++;
    }

    puts(STRING_CONCATENADA);

    system("pause");
    return 0;
}
