#include <stdio.h>


int main() {
//declarando variaveis
    int prova1=0,prova2=0,prova3=0;
    float matriz[10][3];
//rodando programa
    for (int x=0; x<=9; x++){
        for (int y=0; y<=2; y++){
            printf("Informe o valor de matriz[%i][%i]= ",x+1,y+1);
            scanf("%f", &matriz[x][y]);
        }
    }
    for (int x=0; x<=9; x++){
        if (matriz[x][0]<matriz[x][1] && matriz[x][0]<matriz[x][2]){
            prova1++;
        }
        else if (matriz[x][1]<matriz[x][0] && matriz[x][1]<matriz[x][2]){
            prova2++;
        }
        else if (matriz[x][2]<matriz[x][0] && matriz[x][2]<matriz[x][1]){
            prova3++;
        }
    }
    printf("O numero de alunos cuja pior nota foi na PROVA 1 foi %i\n",prova1);
    printf("O numero de alunos cuja pior nota foi na PROVA 2 foi %i\n",prova2);
    printf("O numero de alunos cuja pior nota foi na PROVA 3 foi %i\n",prova3);
    return 0;
}
