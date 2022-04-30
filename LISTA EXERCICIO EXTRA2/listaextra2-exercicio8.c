#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
//declarando variaveis
    int vetor[99],impar[99],n,aux=0,aux2=0;
//rodando programa

    printf("Quantos numeros deseja preencher no vetor? (1 a 100)\n");
    printf("Resposta: ");
    scanf("%i",&n);
    printf("\n");

    printf("Entre com os valores do vetor: (Entre 0 e 50)\n");
    for (int x=0; x<=n-1; x++){
        printf("A[%i]: ",x);
        scanf("%i",&vetor[x]);
        while (vetor[x]<0 || vetor[x]>50){
            printf("Valor invalido, favor redigitar! (Valores entre 0 e 50)");
            scanf("%i",&vetor[x]);
        }
        if (vetor[x]%2!=0){
            impar[aux]=vetor[x];
            aux++;
        }
    }

    printf("O vetor registrado foi:\n");

    for (int x=1; x<=n; x++){
        printf("%i  \t",vetor[x-1]);
        if (x%10==0)
            printf("\n");
    }

    printf("\n");

    printf("O vetor impar eh:\n");

    for (int x=1; x<=aux; x++){
        printf("%i  \t",impar[x-1]);
        if(x%10==0)
            printf("\n");
    }


    return 0;
}
