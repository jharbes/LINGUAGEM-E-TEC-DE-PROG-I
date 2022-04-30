#include <stdio.h>


int main() {
//declarando variaveis
    int menor, maior;
    int vet[5];
//rodando programa
    for (int x=0; x<=4; x++){
        printf("entre com o valor de vet[%i]= ",x);
        scanf("%i", &vet[x]);
    }
    menor=vet[0];
    maior=vet[0];
    for (int x=0; x<=4; x++){
        if (vet[x]<menor){
            menor=x;
            }
        if (vet[x]>maior){
            maior=x;
            }
    }
    printf("o maior valor esta em vet[%i]\n",maior);
    printf("o menor valor esta em vet[%i]\n",menor);
    return 0;
}
