#include <stdio.h>


int main() {
//declarando variaveis
    int numero, aux;
    int vet[6]={1,0,5,-2,-5,7};
//rodando programa
    aux=vet[0]+vet[1]+vet[5];
    printf("o valor solicitado eh %i\n",aux);
    vet[4]=100;
    for (int x=0; x<=5; x++){
        printf("o valor de vet[%i] = %i\n",x,vet[x]);
    }
    return 0;
}
