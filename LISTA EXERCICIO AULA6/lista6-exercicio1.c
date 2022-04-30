#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int aux=0;
    char palavra[20];
//rodando programa

    FILE *arq;
    arq=fopen("arq.txt","w");

    printf("Digite o texto a ser salvo: ");

    gets(palavra);

    fputs(palavra,arq);

    fclose(arq);


    return 0;
}
