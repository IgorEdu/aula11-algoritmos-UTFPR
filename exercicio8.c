/*8. Faça um programa onde o usuário digita 3 informações a respeito de uma pessoa: Nome,
endereço e telefone. Concatene essas três informações em uma única string.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char NOME[20], ENDERECO[50], TELEFONE[12], STRING_CONCATENADA[88];
    int i, chamadaMenu, cont;
    i = chamadaMenu = cont =0;

    do{
      if(chamadaMenu != 0){
        printf("A string digitada excede o tamanho maximo permitido que eh 20 caracteres.\n");
        printf("Digite novamente.\n");
      }
      printf("Digite o nome com no maximo 20 caracteres:\n");
      gets(NOME);
      chamadaMenu++;
    }while(strlen(NOME) >= 20);

    chamadaMenu = 0;

    do{
      if(chamadaMenu != 0){
        printf("A string digitada excede o tamanho maximo permitido que eh 50 caracteres.\n");
        printf("Digite novamente.\n");
      }
      printf("Digite o endereco com no maximo 50 caracteres:\n");
      gets(ENDERECO);
      chamadaMenu++;
    }while(strlen(ENDERECO) >= 50);

    chamadaMenu = 0;

    do{
      if(chamadaMenu != 0){
        printf("A string digitada excede o tamanho maximo permitido que eh 12 caracteres.\n");
        printf("Digite novamente.\n");
      }
      printf("Digite o telefone com no maximo 12 caracteres:\n");
      gets(TELEFONE);
      chamadaMenu++;
    }while(strlen(TELEFONE) >= 12);

    strcpy(STRING_CONCATENADA, NOME);
    strcat(STRING_CONCATENADA, " - ");
    strcat(STRING_CONCATENADA, ENDERECO);
    strcat(STRING_CONCATENADA, " - ");
    strcat(STRING_CONCATENADA, TELEFONE);

    puts(STRING_CONCATENADA);
    system("pause");
    return 0;
}
