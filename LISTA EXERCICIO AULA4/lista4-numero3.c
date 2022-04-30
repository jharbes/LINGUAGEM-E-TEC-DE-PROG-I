#include <stdio.h>


int main() {
//declarando variaveis
    int aux, aux2;
    int vet1[10],vet2[10],vet3[20];
//rodando programa
    for (int x=0; x<=9; x++){
        printf("entre com o valor de vet1[%i]= ",x);
        scanf("%i", &vet1[x]);
    }
    for (int x=0; x<=9; x++){
        printf("entre com o valor de vet2[%i]= ",x);
        scanf("%i", &vet2[x]);
    }
    for (int x=0; x<=19;){
            for (int y=0; y<=9; y++){
                vet3[x]=vet1[y];
                vet3[x+1]=vet2[y];
                x=x+2;
            }
    }
    for (int x=0; x<=19; x++){
        printf("o valor de vet3[%i] = %i\n,",x,vet3[x]);
    }
    return 0;
}
