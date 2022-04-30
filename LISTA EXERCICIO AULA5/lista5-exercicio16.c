#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int aux=0;
    char palavra[51];
//rodando programa

    printf("Entre com os caracteres em minusculo para sua conversao: ");
    scanf("%s",&palavra);


    aux=strlen(palavra);

    for (int y=0; y<=aux-1; y++){
        palavra[y]=palavra[y]-32;
        }

    printf("A string resultando eh: %s",palavra);


    return 0;
}
