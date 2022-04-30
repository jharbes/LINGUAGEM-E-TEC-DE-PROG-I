#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    float x1,x2,x3;
//rodando programa
    printf("Entre com tres valores para calculo da soma de seus quadrados.\n");

    printf("Entre com o valor de X1: ");
    scanf("%f",&x1);
    printf("\n");

    printf("Entre com o valor de X2: ");
    scanf("%f",&x2);
    printf("\n");

    printf("Entre com o valor de X3: ");
    scanf("%f",&x3);

    printf("\n");

    printf("a soma dos quadrados dos valores apresentados eh %f",x1*x1+x2*x2+x3*x3);

    return 0;
}
