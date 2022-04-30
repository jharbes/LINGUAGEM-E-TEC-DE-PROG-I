#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    float comprimento;
//rodando programa

    printf("Entre com o comprimento em metros: ");
    scanf("%f",&comprimento);

    printf("\n");

    printf("O comprimento decimetros eh %f, em centimetros eh %f e em milimetros eh %f\n",(comprimento*10),(comprimento*100),(comprimento*1000));


    return 0;
}
