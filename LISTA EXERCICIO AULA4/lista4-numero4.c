#include <stdio.h>


int main() {
//declarando variaveis
    int aux, aux2;
    int matriz[4][4];
//rodando programa
    for (int x=0; x<=3; x++){
        for (int y=0; y<=3; y++){
            matriz[x][y]=(x+1)*(y+1);
        }
    }
    for (int x=0; x<=3; x++){
        printf("\n");
        printf("|   ");
        for (int y=0; y<=3; y++){
            printf("  %i    |",matriz[x][y]);
        }
    }
    return 0;
}
