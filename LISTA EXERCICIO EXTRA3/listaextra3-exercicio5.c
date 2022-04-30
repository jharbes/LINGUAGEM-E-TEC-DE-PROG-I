#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int soma=0,k=0,n=0;
//rodando programa

    printf("Calculo dos 50 primeiros numeros pares.\n");

    while(k<50){
        n=n+2;
        soma=soma+n;
        k++;
        }

    printf("Resultado = %i",soma);

    return 0;
}
