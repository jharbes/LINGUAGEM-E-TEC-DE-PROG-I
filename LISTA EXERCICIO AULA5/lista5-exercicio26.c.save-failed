#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int aux=0,aux2=0;
    char palavra[50],palavra1[50];
//rodando programa
    printf("Entre com a string:");
    gets(palavra);

    aux=strlen(palavra);

    for (int y=0; y<=aux; y++){
        if (palavra[y]==' '){
            for (int x=y; x<=aux; x++)
                palavra[x]=palavra[x+1];
        }
    }

    strcpy(palavra1,palavra);

    strrev(palavra1);

    printf("palavra de tras pra frente: %s",palavra1);
    printf("\n");


    if (strcmp(palavra,palavra1))
        printf("As strings nao sao palindromos.");
    else
        printf("As strings sao palindromos.");


    return 0;
}
