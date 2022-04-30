#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    float premio=780000;
//rodando programa
    printf("A divisao do premio de R$780.000,00 ficara da seguinte maneira:\n");
    printf("\n");

    printf("o primeiro ganhador recebera R$%f.\n",premio*0.46);
    printf("\n");

    printf("o segundo ganhador recebera R$%f.\n",premio*0.32);
    printf("\n");

    printf("o terceiro ganhador recebera R$%f.\n",premio*0.22);
    printf("\n");

    return 0;
}
