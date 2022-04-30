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

    printf("A palavra de tras pra frente eh: ");

    for (int y=aux; y>=0; y--){
        printf("%c",palavra[y]);
        }


    return 0;
}
