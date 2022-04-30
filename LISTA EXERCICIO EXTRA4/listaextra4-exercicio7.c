#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    char n;
    float a[5];

//rodando programa
    printf("VETOR DE CINCO POSICOES, OPCOES DIVERSAS.\n");
    printf("\n");

    printf("Favor entrar com os valores do vetor: ");
    printf("\n");

    for (int x=0; x<=4; x++){
        printf("A[%i]= ",x);
        scanf("%f",&a[x]);
        }
    printf("\n");

    printf("Escolha a opcao desejada:\n\n0- Finalizar o programa\n1- Mostrar o vetor na ordem direta.\n2- Mostrar o vetor na ordem inversa.\n");
    scanf(" %c",&n);

    switch(n){
    case '0':
        break;
    case '1':
        for (int x=0; x<=4; x++)
            printf("%f\t",a[x]);
        break;
    case '2':
        for (int x=4; x>=0; x--)
            printf("%f\t",a[x]);
        break;
    default:
        printf("Codigo invalido.");
        }



    return 0;
}
