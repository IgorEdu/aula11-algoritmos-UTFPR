/*5. Faça um programa que atribua a string “algoritmos” para a variável DISCIPLINA (usando a
função strcpy).*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char ALGORITIMOS[11] = "algoritimos";
    char DISCIPLINA[11];
    int i = 0;
    strcpy(DISCIPLINA, ALGORITIMOS);
    puts(DISCIPLINA);

    system("pause");
    return 0;
}
