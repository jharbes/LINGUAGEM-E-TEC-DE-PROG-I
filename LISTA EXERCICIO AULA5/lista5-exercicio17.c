#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int aux=0,aux2=0;
    char palavra[51];
//rodando programa

    printf("Entre com a frase utilizando espacos:");
    fgets(palavra,51,stdin);

    aux=strlen(palavra);

    for (int y=0; y<=aux; y++){
        if (palavra[y]==' '){
            for (int x=y; x<=aux; x++)
                palavra[x]=palavra[x+1];
        }
    }

    printf("A frase sem espacos eh %s\n",palavra);

    return 0;
}
