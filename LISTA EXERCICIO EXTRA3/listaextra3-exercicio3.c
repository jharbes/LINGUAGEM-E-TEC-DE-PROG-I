#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int x1,x2,x3,aux;
//rodando programa
    printf("Entre com tres valores para mostra-los em ordem crescente.\n");

    printf("Entre com o valor de X1: ");
    scanf("%i",&x1);
    printf("\n");

    printf("Entre com o valor de X2: ");
    scanf("%i",&x2);
    if (x2<x1){
        aux=x1;
        x1=x2;
        x2=aux;
    }
    printf("\n");

    printf("Entre com o valor de X3: ");
    scanf("%i",&x3);
    if (x3<x2){
        aux=x2;
        x2=x3;
        x3=aux;
    }

    if (x2<x1){
        aux=x1;
        x1=x2;
        x2=aux;
    }
    printf("\n");

    printf("Os numeros em ordem crescente sao: %i %i %i\n",x1,x2,x3);

    return 0;
}
