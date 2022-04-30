#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int aux=0,aux2=0;
    char palavra[20],letra;
//rodando programa

    printf("Entre com a palavra:");
    scanf("%s",&palavra);

    printf("informe o caractere substituto:");
    scanf(" %c",&letra);

    aux=strlen(palavra);

    for (int y=0; y<=aux; y++){
        if (palavra[y]=='a' || palavra[y]=='e' || palavra[y]=='i' || palavra[y]=='o' || palavra[y]=='u'){
            aux2++;
            palavra[y]=letra;
        }
    }

    printf("O numero de vogais da palavra eh %i\n",aux2);

    printf("A palavra com o caractere substituto no local das vogais fica: %s",palavra);


    return 0;
}
