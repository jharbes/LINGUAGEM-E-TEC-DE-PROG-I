#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
//declarando variaveis
    char nome[99];
    int aux;
//rodando programa

    printf("Digite um nome: ");
    gets(nome);
    printf("\n");

    aux=strlen(nome);

    printf("As letras do nome que se encontram em indices impares do vetor sao: \n");

    for (int x=0; x<=aux; x++){
        if (x%2!=0 && nome[x]!=' ')
            printf("%c  ",nome[x]);
    }



    return 0;
}
