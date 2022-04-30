#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    float quadrado;
//rodando programa

    printf("Entre com o numero para calculo de seu quadrado: ");
    scanf("%f",&quadrado);

    printf("\n");

    printf("O quadrado do numero %f,  eh %f\n",quadrado,quadrado*quadrado);


    return 0;
}
