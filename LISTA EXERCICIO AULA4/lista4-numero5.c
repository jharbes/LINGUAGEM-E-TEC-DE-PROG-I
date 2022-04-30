#include <stdio.h>


int main() {
//declarando variaveis
    int aux, aux2;
    int matriz[10][10];
//rodando programa
    for (int x=0; x<=9; x++){
        for (int y=0; y<=9; y++){
            if (x<y){
                matriz[x][y]=2*(x+1)+7*(y+1)-2; //soma 1 a cada linha e coluna para calcularmos com base em matriz de 1 a 10 e nao de 0 a 9
                }
            else if (x==y){
                matriz[x][y]=3*(x+1)*(x+1)-1;
                }
            else {
                matriz[x][y]=4*(x+1)*(x+1)*(x+1)-5*(y+1)*(y+1)+1;
                }
        }
    }
    for (int x=0; x<=9; x++){
        printf("\n");
        printf("| ");
        for (int y=0; y<=9; y++){
            printf(" %i\t|",matriz[x][y]);
        }
    }
    return 0;
}
