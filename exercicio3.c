/*3. Faça um programa que leia uma string digitada pelo usuário (máximo 20 caracteres) e imprima na
tela o número de vogais existente nesta string.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXIMO_STRING 20

int verificaVogal(char CARACTER){
    int ehVogal = 0;
    switch(tolower(CARACTER)){
        case 'a':
            ehVogal = 1;
            break;
        case 'e':
            ehVogal = 1;
            break;
        case 'i':
            ehVogal = 1;
            break;
        case 'o':
            ehVogal = 1;
            break;
        case 'u':
            ehVogal = 1;
            break;
        default:
            ehVogal = 0;
            break;
    }
    return ehVogal;
}

int contaVogais(char STRING[20]){
    int soma = 0;
    int i = 0;
    for(i = 0; i <= strlen(STRING); i++){
        if(verificaVogal(STRING[i]) == 1)
            soma++;
    }
    return soma;
}

int main(){
    char STR1[MAXIMO_STRING];
    int chamadaMenu = 0;
    int vogais = 0;
    do{
      if(chamadaMenu != 0){
        printf("A string digitada excede o tamanho maximo permitido que eh 20 caracteres.\n");
        printf("Digite novamente.\n");
      }
      printf("Digite a string com no maximo 20 caracteres:\n");
      gets(STR1);
      chamadaMenu++;
    }while(strlen(STR1) >= MAXIMO_STRING);

    vogais = contaVogais(STR1);
    printf("A quantidade de vogais na string eh: %d\n", vogais);

    system("pause");
    return 0;
}
