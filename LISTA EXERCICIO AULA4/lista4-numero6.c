#include <stdio.h>


int main() {
//declarando variaveis
    float somacolimpar=0,soma24=0;
    float matriz[3][6];
//rodando programa
    for (int x=0; x<=2; x++){
        for (int y=0; y<=5; y++){
            printf("Informe o valor de matriz[%i][%i]= ",x+1,y+1);
            scanf("%f", &matriz[x][y]);
        }
    }
    for (int x=0; x<=2; x++){
        for (int y=0; y<=5; y++){
            if ((y+1)%2!=0){
                somacolimpar=somacolimpar+matriz[x+1][y+1];
            }
            if ((y+1)==2 || (y+1)==4){
                soma24=soma24+matriz[x+1][y+1];
            }
        }
        matriz[x][5]=matriz[x][0]+matriz[x][1];
    }
    printf("A soma de todos os elementos das colunas impares eh: %f\n",somacolimpar);
    printf("A media aritmetica de todos os elementos da 2a e 4a colunas eh: %f\n",soma24/6);
    for (int x=0; x<=2; x++){
        printf("\n");
        printf("| ");
        for (int y=0; y<=5; y++){
            printf(" %f\t|",matriz[x][y]);
        }
    }
    return 0;
}
