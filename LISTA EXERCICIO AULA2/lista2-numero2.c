#include <stdio.h>


int main() {
//declarando variaveis
    int operacao;
    float raio;
//rodando programa
    printf("digite a operacao que deseja efetuar: (1 ou 2)");
    scanf("%d",&operacao);
    printf("digite o raio da circunferencia:");
    scanf("%f",&raio);
    if ( operacao == 1 ) {
        printf("area da circunferencia eh %f", 3.14*raio*raio);
        }
    else if ( operacao == 2 ) {
        printf("perimetro da circunferencia eh %f", 2*3.14*raio);
        }
    else {
        printf("indicador de operacao mal fornecido.");
        }
    return 0;
}
