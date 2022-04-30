#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    float venda;
//rodando programa
    printf("PROGRAMA CALCULADOR DE COMISSAO:\n");
    printf("\n");

    printf("Informe o valor das vendas em questao: ");
    scanf("%f",&venda);
    printf("\n");

    if (venda>=100000)
        printf("Valor da comissao eh de %f.",0.16*venda+700);

    if (venda<100000 && venda >=80000)
        printf("Valor da comissao eh de %f.",0.14*venda+650);

    if (venda<80000 && venda >=60000)
        printf("Valor da comissao eh de %f.",0.14*venda+600);

    if (venda<60000 && venda >=40000)
        printf("Valor da comissao eh de %f.",0.14*venda+550);

    if (venda<40000 && venda >=20000)
        printf("Valor da comissao eh de %f.",0.14*venda+500);

    if (venda<=20000)
        printf("Valor da comissao eh de %f.",0.14*venda+400);


    printf("\n");

    return 0;
}
