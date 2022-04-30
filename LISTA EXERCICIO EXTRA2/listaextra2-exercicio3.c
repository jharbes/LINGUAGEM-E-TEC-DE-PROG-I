#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    float a,b;
//rodando programa

    printf("Entre com o valor de A e B para descobrir qual eh o maior.\n");

    printf("Entre com o valor de A: ");
    scanf("%f",&a);

    printf("\n");

    printf("Entre com o valor de B: ");
    scanf("%f",&b);

    printf("\n");

    if (a>b)
        printf("O valor de A eh maior do que o valor de B.\n");
    else if (a<b)
        printf("O valor de B eh maior do que o valor de A.\n");
    else
        printf("A eh igual a B.\n");


    return 0;
}
