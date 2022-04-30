#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int aux=0;
    char palavra[100];
//rodando programa

    printf("Entre com a frase para que seja criptografada: ");
    fgets(palavra,100,stdin);

    aux=strlen(palavra);

    for (int y=0; y<=aux-1; y++){
        if (palavra[y]!=' ')
            palavra[y]=palavra[y]+3;
        }

    printf("A string resultado eh: %s",palavra);


    return 0;
}
