#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int x1, x2;
//rodando programa

    printf("Entre com o primeiro valor (X1): ");
    scanf("%i",&x1);

    printf("\n");

    printf("Entre com o segundo valor (X2): ");
    scanf("%i",&x2);

    if (x1<x2){
        for (int x=(x1); x<=x2; x++)
            printf("  %i",x);
        printf("\n");
        for (int x=x2; x>=x1; x--)
            printf("  %i",x);
    }
    if (x1==x2){
        printf("Valores iguais.");
    }

    return 0;
}
