#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int aux=0,aux2=0;
    char palavra[51],letra;
//rodando programa

    printf("Entre com a palavra:");
    scanf("%s",&palavra);


    aux=strlen(palavra);

    for (int y=0; y<=aux-1; y++){
        palavra[y]=palavra[y]+1;
        }

    printf("A string resultando eh: %s",palavra);


    return 0;
}
