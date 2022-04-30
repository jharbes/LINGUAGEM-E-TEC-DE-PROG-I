#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int vetor[10],aux1,aux2;
//rodando programa

    for (int x=0; x<=9; x++){
        printf("Entre com o valor de X[%i]: ",x);
        scanf("%i",&vetor[x]);
        printf("\n");
        }

    aux1=vetor[1];
    aux2=vetor[1];

    for (int x=0; x<=9; x++){
        if (vetor[x]>aux1)
            aux1=vetor[x];
        if (vetor[x]<aux2)
            aux2=vetor[x];
        }

    printf("O maior valor lido eh: %i\n",aux1);
    printf("O menor valor lido eh: %i\n",aux2);


    return 0;
}
