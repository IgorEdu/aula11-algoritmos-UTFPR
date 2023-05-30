/*2. Solicitar no teclado uma frase com no máximo 40 letras. Se o tamanho for maior que 40, dar uma
mensagem de entrada inválida e solicitar novamente, se passar, imprimir a frase na vertical.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXIMO_FRASE 40


int main(){
    char FRASE[MAXIMO_FRASE];
    int chamadaMenu = 0;
    int i = 0;
    do{
      if(chamadaMenu != 0){
        printf("A frase digitada excede o tamanho maximo permitido que eh 40 caracteres.\n");
        printf("Digite novamente.\n");
      }
      printf("Digite a frase com no maximo 40 caracteres:\n");
      gets(FRASE);
      chamadaMenu++;
    }while(strlen(FRASE) >= MAXIMO_FRASE);

    for(i = 0; i <= strlen(FRASE); i++){
        printf("%c\n", FRASE[i]);
    }

    system("pause");
    return 0;
}
