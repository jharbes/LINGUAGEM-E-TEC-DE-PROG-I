#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int n,k,i=1;
//rodando programa
    printf("IMPRIMINDO O TRIANGULO DE FLOYD.\n");
    printf("\n");

    printf("Informe o numero de linhas a serem impressas do triangulo: ");
    scanf("%i",&n);
    printf("\n");

    for (int x=1; x<=n; x++){
        k=x;
        while (k>0){
            printf("%i\t",i);
            i++;
            k--;
        }
        printf("\n");
    }

    return 0;
}
