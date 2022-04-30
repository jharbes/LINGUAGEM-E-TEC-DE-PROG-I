#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int aux=0,aux2=0,k=0;
    char palavra[11];
//rodando programa

    printf("Entre com a data no formato DD/MM/AAAA:");
    gets(palavra);
    printf("\n");

    while (palavra[2]!='/' || palavra[5]!='/'){
        printf("data no formato incorreto, entre com a data no formato DD/MM/AAAA: ");
        gets(palavra);
        printf("\n");
        }

    aux=strlen(palavra);



    if (k>0)
        printf("A cadeia A se repete na cadeia B %i vez(es).\n",k);
    else
        printf("A cadeia A nao ocorre na cadeia B.\n");

    return 0;
}
