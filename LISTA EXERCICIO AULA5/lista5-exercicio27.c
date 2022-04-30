#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int aux=0,aux2=0,k=0;
    char palavra[51],palavra1[51],palavra2[51];
//rodando programa

    printf("Entre com a primeira string :");
    gets(palavra);
    printf("\n");
    printf("Entre com a segunda string :");
    gets(palavra1);

    aux=strlen(palavra);
    aux2=strlen(palavra1);

    if (aux2>aux){
        printf("A string 2 nao esta no final da string 1.");
    }
    else {
        for (int x=(aux-aux2); x<=aux-1; x++){
            palavra2[k]=palavra[x];
            k++;
        }
        palavra2[k]='\0';

        if (strcmp(palavra1,palavra2))
            printf("A string 2 nao esta no final da string 1.");
        else
            printf("A segunda string esta contida no final da primeira string.");
    }

    return 0;
}
