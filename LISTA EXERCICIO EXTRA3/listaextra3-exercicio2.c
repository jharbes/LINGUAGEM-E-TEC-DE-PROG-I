#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    float raio;
//rodando programa
    printf("Entre com o valor do raio para calculo da area do circulo correspondente.\n");

    printf("Raio= ");
    scanf("%f",&raio);
    printf("\n");

    printf("a area do circulo cujo raio eh %f eh de %f m2.",raio,3.141592*raio*raio);

    return 0;
}
