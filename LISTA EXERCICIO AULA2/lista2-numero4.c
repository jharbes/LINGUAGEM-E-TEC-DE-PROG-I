#include <stdio.h>


int main() {
//declarando variaveis
    float altura, peso, imc;
//rodando programa
    printf("informe a altura em metros:");
    scanf("%f",&altura);
    printf("informe o peso em kg:");
    scanf("%f",&peso);
    imc = peso/(altura*altura);
    if (imc<=18.5) {
        printf("abaixo do peso normal");
    }
    else if ((imc>18.5) && (imc<=25)) {
        printf("peso normal");
        }
    else if ((imc>25) && (imc<=30)) {
        printf("peso acima do normal");
        }
    if (imc>30) {
        printf("peso excessivo");
    }
    return 0;
}
