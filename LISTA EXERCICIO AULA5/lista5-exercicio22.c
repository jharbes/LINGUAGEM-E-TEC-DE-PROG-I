#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int aux=0,aux2=0;
    char palavra[51];
    float valor;
//rodando programa

    printf("Entre com o nome da mercadoria:");
    scanf("%s",&palavra);

    printf("informe o valor dessa mercadoria:");
    scanf("%f",&valor);


    printf("A mercadoria %s possui o valor de %f e o valor no caso de pagamento a vista eh de %f\n",palavra,valor,valor*0.9);
    printf("\n");

    return 0;
}
