#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int n;
//rodando programa
    printf("PROGRAMA QUE CALCULA OS DIVISORES DE UM NUMERO POSITIVO:\n\n");
    printf("\n");

    printf("Informe um numero inteiro positivo: ");
    scanf("%i",&n);
    printf("\n");
    while (n<0){
        printf("NUMERO INFORMADO FORA DOS PARAMETROS! FAVOR REFAZER A OPERACAO.\n");
        printf("REDIGITE O NUMERO POSITIVO: ");
        scanf("%i",&n);
    }

    printf("\n");
    for (int x=1; x<n; x++){
        if (n%x==0)
            printf("O numero %i eh divisor.\n",x);
    }

    return 0;
}
