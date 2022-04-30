#include <stdio.h>


int main() {
//declarando variaveis
    int numero, aux;
//rodando programa
    printf("digite um numero inteiro:");
    scanf("%d", &numero);
    aux=numero+20;
    numero=numero-20;
    while (numero<=aux){
        printf("    %d", numero);
        numero=numero+1;
    }
    return 0;
}
