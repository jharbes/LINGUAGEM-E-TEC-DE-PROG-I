#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
//declarando variaveis
    int a,maior,menor;
//rodando programa

    printf("Entre com um valor maior ou igual a zero, entre com um valor negativo para finalizar:\n");
    scanf("%i",&a);
    maior=a;
    menor=a;
    printf("\n");

    while (a>=0){
        printf("Entre com um valor maior ou igual a zero, entre com um valor negativo para finalizar:\n");
        scanf("%i",&a);
        printf("\n");
        if (a>maior)
            maior=a;
        else if (a<menor)
            menor=a;
        }

    printf("\n");

    printf("O maior valor digitado foi %i\n",maior);
    printf("O menor valor digitado foi %i\n",menor);

    return 0;
}
