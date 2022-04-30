#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int aux=0;
    char palavra[20];
//rodando programa

    FILE *arq;
    arq=fopen("arq.txt","r");

    fgets(palavra,20,arq);
    printf("%s",palavra);


    fclose(arq);


    return 0;
}
