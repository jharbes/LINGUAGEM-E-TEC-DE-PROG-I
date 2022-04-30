#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int n,y;
//rodando programa
    printf("INVERTENDO UM NUMERO INTEIRO E POSITIVO DE TRES DIGITOS:\n");
    printf("\n");

    printf("Informe um numero inteiro de tres digitos para inverte-lo (escrever de tras pra frente): ");
    scanf("%i",&n);
    printf("\n");
    while (n<100 || n>999){
        printf("NUMERO INFORMADO FORA DOS PARAMETROS! FAVOR REFAZER A OPERACAO.\n");
        printf("REDIGITE O NUMERO POSITIVO INTEIRO DE TRES DIGITOS: ");
        scanf("%i",&n);
    }

    y=((n%10)*100)+((n%100-n%10))+((n-(n%100))/100);

    if (n%10==0)
        printf("O numero invertido eh 0%i.\n",y);
    else
        printf("O numero invertido eh %i.\n",y);

    printf("\n");

    return 0;
}
