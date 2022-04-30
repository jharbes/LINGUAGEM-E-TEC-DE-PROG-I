#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    float celsius;
//rodando programa

    printf("Entre com a temperatura em celsius para ser convertida em fahrenheit: ");
    scanf("%f",&celsius);

    printf("\n");

    printf("a temperatura %f em graus celsius,  eh %f em graus fahrenheit\n",celsius,(celsius*1.8)+32);


    return 0;
}
