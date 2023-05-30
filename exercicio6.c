/*6. Faça um programa que compare duas strings (sem usar a função strcmp).
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXIMO_STRING 20

int comparaStrings(char STR1[MAXIMO_STRING], char STR2[MAXIMO_STRING]){
    int iguais = 0;
    int i = 0;
    if(strlen(STR1) != strlen(STR2)){
        iguais = 0;
        return iguais;
    }

    for(i = 0; i <= strlen(STR1); i++){
        if(STR1[i] == STR2[i])
            iguais = 1;
        else{
            iguais = 0;
            return iguais;
        }
    }

    return iguais;
}

int main() {
    char STR1[MAXIMO_STRING], STR2[MAXIMO_STRING];
    int chamadaMenu = 0;
    int i = 0;

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

    if(comparaStrings(STR1, STR2) == 1){
        printf("As duas strings digitadas sao iguais.\n");
    } else{
        printf("As strings sao diferentes.\n");
    }

    system("pause");
    return 0;
}
