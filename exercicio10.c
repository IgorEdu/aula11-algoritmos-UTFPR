/*10. Deseja-se ler duas cadeias de N caracteres cada e verificar se uma � anagrama da outra,
mostrando em seguida os pares que n�o s�o anagramas com a indica��o �n�o s�o anagramas� e
os pares que s�o anagramas com a indica��o �s�o anagramas�.
Ex: ALMA LAMA - s�o anagramas
 BOLA LOBO - n�o s�o anagramas*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int verificaAnagrama(char STR1[20], char STR2[20]) {
    int i = 0;
    if (strlen(STR1) != strlen(STR2))
        return 0;

    for (i = 0; i < strlen(STR2); i++) {
        char* pos = strchr(STR1, STR2[i]);
        if (pos != NULL)
            strcpy(pos, pos + 1);
    }

    return strlen(STR1) == 0 ? 1 : 0;

  }


int main(){

    char STR1[20], STR2[20];

    printf("Digite a primeira string: \n");
    gets(STR1);
    printf("Digite a segunda string: \n");
    gets(STR2);

    int ret = verificaAnagrama(STR1, STR2);
    if (ret == 1){
        printf("As palavras sao anagramas uma das outras.\n");
    } else{
        printf("As palavras nao sao anagramas uma das outras.\n");
    }


    system("pause");
    return 0;
}


