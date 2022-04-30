#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int aux=0;
    char palavra[20];
//rodando programa

    printf("Entre com a palavra:");
    scanf("%s",&palavra);

    aux=strlen(palavra);

    printf("String sem as vogais: ");

    for (int y=0; y<=aux; y++){
        if (palavra[y]!='a' && palavra[y]!='e' && palavra[y]!='i' && palavra[y]!='o' && palavra[y]!='u'){
            printf("%c",palavra[y]);
        }
    }


    return 0;
}
