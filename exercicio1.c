/*1. Receber um nome do teclado e imprimi-lo de trás para a frente*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void imprimeInvertido(char NOME[20]){
    char INVERTIDO[20];
    int i = strlen(NOME)-1;
    int cont = 0;

    for(i ; i >= 0; i--){
        INVERTIDO[cont] = NOME[i];
        cont++;
    }
    INVERTIDO[cont] = '\0';

    puts(INVERTIDO);
}

int main(){
    char NOME[20];

    printf("Digite um nome para inverter: \n");
    gets(NOME);
    imprimeInvertido(NOME);

    system("pause");
    return 0;
}
