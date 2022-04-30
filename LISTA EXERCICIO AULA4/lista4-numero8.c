#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
//declarando variaveis
    int aux,segundos;
    int matriz[5][5];
//rodando programa

    segundos = time(0);
    srand(segundos);

    for (int x=0; x<=4; x++){
        for (int y=0; y<=4; y++){
            matriz[x][y]=rand()%100;
        }
    }
    for (int x=0; x<=4; x++){
        for (int y=0; y<=4; y++){
            aux=matriz[x][y];
            for (int a=0; a<=4; a++){
                for (int b=0; b<=4; b++){
                    while (matriz[a][b]==aux){
                            matriz[x][y]=rand()%100;
                            aux=-1;
                    }
                }
            }
        }
    }
    for (int x=0; x<=4; x++){
        printf("\n");
        printf("| ");
        for (int y=0; y<=4; y++){
            printf(" %i\t|",matriz[x][y]);
        }
    }
    return 0;
}
