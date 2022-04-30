#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    float k,media,soma=0;
//rodando programa

    printf("Informe a nota dos quinze alunos para calcular a media geral.\n");

    for (int x=0;x<=14;x++){
        printf("NOTA[%i]= ",x+1);
        scanf("%f",&k);
        soma=soma+k;
        }

    media=soma/15;

    printf("A media geral das notas eh %f\n",media);

    return 0;
}
