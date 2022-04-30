#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    float n,pag;
//rodando programa
    printf("CALCULO DO PAGAMENTO DO ENCANADOR. (valor liquido)\n");
    printf("\n");

    printf("Informe o numero de dias trabalhados pelo encanador: ");
    scanf("%f",&n);
    printf("\n");

    pag=(n*30)*0.92;

    printf("O valor liquido recebido pelo encanador sera de R$%f.\n",pag);
    printf("\n");

    return 0;
}
