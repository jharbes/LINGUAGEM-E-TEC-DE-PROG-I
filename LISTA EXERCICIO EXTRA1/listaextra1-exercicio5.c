#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int aux=0,aux2=0;
    char palavra[51],letra;
//rodando programa

    printf("Entre com a string desejada: ");
    gets(palavra);

    printf("\n");
    printf("Entre com a letra a ser removida da string: ");
    scanf("%c",&letra);


    aux=strlen(palavra);

    for (int y=0; y<=aux; y++){
        if (palavra[y]==letra){
            for (int x=y; x<=aux; x++)
                palavra[x]=palavra[x+1];
        }
    }

    printf("A frase sem a letra removida eh %s\n",palavra);

    return 0;
}
