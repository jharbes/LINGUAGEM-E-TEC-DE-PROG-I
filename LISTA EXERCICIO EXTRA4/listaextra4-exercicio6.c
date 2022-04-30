#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int n=0,aux;
    int a[10];

//rodando programa
    printf("VERIFICACAO DE IGUAIS EM UM VETOR DE 10 POSICOES.\n");
    printf("\n");

    printf("Favor entrar com os valores do vetor: ");
    printf("\n");

    for (int x=0; x<=9; x++){
        printf("A[%i]= ",x);
        scanf("%i",&a[x]);
        }
    printf("\n");

    for (int k=1; k<=9; k++){
        for (int j=0; j<9; j++){
            if (a[j]>a[j+1]) {
                aux=a[j];
                a[j]=a[j+1];
                a[j+1]=aux;
            }
        }
    }

    for (int x=0; x<=8; x++){
        if ((a[x]==a[x+1]) && (a[x+1]!=a[x+2])){
              printf("numero repetido: %i",a[x]);
              printf("\n");
        }
        }

    return 0;
}
