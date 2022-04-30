#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int aux=0,aux2,aux3=0,posicao;
    char palavra[51],letra;
//rodando programa

    printf("Entre com a string:");
    fgets(palavra,51,stdin);

    printf("informe o caractere a ser procurado:");
    scanf(" %c",&letra);

    printf("informe a posicao onde comecar a busca:");
    scanf("%i",&posicao);

    aux=strlen(palavra);

    for (int x=posicao; x<=aux; x++){
        if (palavra[x]==letra){
            printf("A posicao onde foi encontrado o caractere foi a %i\n",x);
            aux3=1;
            break;
        }
    }

    return 0;
}
