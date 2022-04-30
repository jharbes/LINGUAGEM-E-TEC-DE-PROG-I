#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int n,aux;
    int a[99];

//rodando programa
    FILE *arq, *arq2;
  	arq = fopen("arq.txt", "w");

    printf("COVERTER VETOR EM BINARIO COM GRAVACAO EM ARQUIVO.\n");
    printf("\n");

    printf("Digite o numero de elementos do vetor: ");
    scanf("%i",&n);
    printf("\n");

    printf("Favor entrar com os valores do vetor: ");
    printf("\n");

    for (int x=0; x<=n-1; x++){
        printf("A[%i]= ",x);
        scanf("%i",&a[x]);
        }
    printf("\n");

    void binario(int n){
        if(n==0)
            printf("\n");
        else{
            binario(n/2);
            fprintf(arq,"%d",n%2);
        }
    }

    for (int x=0; x<=n-1; x++){
        binario(a[x]);
        fprintf(arq,"\n");
        }

    return 0;
}
