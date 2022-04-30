#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int n=0;
    char a[20];

//rodando programa
    printf("LENDO QUANTIDADE DE ESPACOS EM BRANCO EM UMA FRASE.\n");
    printf("\n");

    printf("Favor digitar a frase desejada: ");

    gets(a);
    printf("\n");

    for (int x=0; x<=19; x++){
        if (a[x]==' ')
            n++;
    }

    printf("O numero de espacos em branco da frase eh %i.\n",n);

    return 0;
}
