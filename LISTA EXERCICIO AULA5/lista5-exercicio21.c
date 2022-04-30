#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int aux=0,aux2=0;
    char palavra[51],palavra1[51];
//rodando programa

    printf("Entre com a primeira frase:");
    fgets(palavra,51,stdin);

    printf("Entre com a segunda frase:");
    fgets(palavra1,51,stdin);

    aux=strlen(palavra);
    aux2=strlen(palavra1);

    for (int x=0; x<=aux; x++){
        if (palavra[x]=='a' || palavra[x]=='A')
            palavra[x]='*';
    }
    for (int x=0; x<=aux2; x++){
        if (palavra1[x]=='a' || palavra1[x]=='A')
            palavra1[x]='*';
    }

    printf("A primeira frase de tras pra frente eh: \n");

    for (int y=aux; y>=0; y--){
        printf("%c",palavra[y]);
        }

    printf("\n");

    printf("A segunda frase de tras pra frente eh: \n");

    for (int y=aux2; y>=0; y--){
        printf("%c",palavra1[y]);
        }


    return 0;
}
