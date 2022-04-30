#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int aux=0,aux2=0;
    char palavra[30],letra=' ';
//rodando programa

    printf("Entre com a frase utilizando espacos:");
    fgets(palavra,30,stdin);

    aux=strlen(palavra);

    for (int y=0; y<=aux; y++){
        if (palavra[y]==' '){
            aux2++;
        }
    }

    printf("O numero de espacos da frase eh %i\n",aux2);

    return 0;
}
