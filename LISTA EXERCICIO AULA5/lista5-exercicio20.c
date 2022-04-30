#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int aux=0,aux2=0;
    char palavra[5][51],economico[51];
    float consumo[5],economic=0;
//rodando programa

    for (int y=0; y<=4; y++){
            printf("Entre com o modelo do carro:");
            scanf("%s",&palavra[y]);

            printf("informe o consumo desse modelo em km/l:");
            scanf("%f",&consumo[y]);

            if (consumo[y]>=economic){
                economic=consumo[y];
                strcpy(economico,palavra[y]);
            }
    }

    printf("O modelo de carro mais economico eh o %s\n",economico);
    printf("\n");
    for (int x=0; x<=4; x++){
        printf("O carro modelo %s consome %f litros de combustivel para percorrer 1000km.\n",palavra[x],1000/consumo[x]);
        printf("\n");
    }

    return 0;
}
