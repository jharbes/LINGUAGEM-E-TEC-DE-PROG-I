#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
//declarando variaveis
    float a;
//rodando programa

    printf("Entre com um valor, se for positivo calcularemos sua raiz, se for negativo calcularemos seu quadrado, se for zero nao faremos nada.\n");

    printf("\n");

    printf("Digite o numero desejado: ");
    scanf("%f",&a);

    printf("\n");

    if (a>0)
        printf("A raiz do numero digitado eh: %f\n",sqrt(a));
    else if (a<0)
        printf("O quadrado do numero digitado eh: %f\n",a*a);
    else
        printf("Nao fizemos nada");


    return 0;
}
