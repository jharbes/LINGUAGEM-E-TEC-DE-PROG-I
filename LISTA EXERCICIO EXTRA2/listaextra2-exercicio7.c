#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
//declarando variaveis
    int vetor[9],maior,posicao;
//rodando programa

    printf("Favor entrar com dez numeros inteiros abaixo.\n");
    printf("\n");

    printf("A[0]: ");
    scanf("%i",&vetor[0]);
    maior=vetor[0];
    posicao=0;

    for (int x=1; x<=9; x++){
        printf("A[%i]: ",x);
        scanf("%i",&vetor[x]);
        if (vetor[x]>maior){
            maior=vetor[x];
            posicao=x;
        }
    }

    printf("O vetor registrado foi:\n");

    for (int x=0; x<=9; x++){
        printf("%i  ",vetor[x]);
    }
    printf("\n");

    printf("O valor do maior elemento eh %i e a sua posicao eh a %i\n",maior,posicao);


    return 0;
}
