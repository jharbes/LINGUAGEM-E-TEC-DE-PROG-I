#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    float altura,peso;
//rodando programa
    printf("Entre com a altura e peso de uma pessoa para receber a sua classificacao.\n");

    printf("Altura (em metros) = ");
    scanf("%f",&altura);
    printf("\n");

    printf("Peso (em kilogramas) = ");
    scanf("%f",&peso);
    printf("\n");

    if (altura<1.2){
        if (peso<60)
            printf("Classificacao A\n");
        else if (peso>=60 && peso <=90)
            printf("Classificacao D\n");
        else
            printf("Classificacao G\n");
        }
    if (altura>=1.2 && altura<=1.7){
        if (peso<60)
            printf("Classificacao B\n");
        else if (peso>=60 && peso <=90)
            printf("Classificacao E\n");
        else
            printf("Classificacao H\n");
        }
    if (altura>1.7){
        if (peso<60)
            printf("Classificacao C\n");
        else if (peso>=60 && peso <=90)
            printf("Classificacao F\n");
        else
            printf("Classificacao I\n");
        }


    return 0;
}
