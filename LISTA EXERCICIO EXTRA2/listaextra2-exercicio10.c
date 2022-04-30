#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
//declarando variaveis
    int idade;
    char sexo,nome[30];
//rodando programa

    printf("Digite o nome da pessoa: ");
    gets(nome);
    printf("\n");

    printf("Digite a idade dessa pessoa: ");
    scanf("%i",&idade);
    printf("\n");

    printf("Digite o sexo dessa pessoa: (m ou f) ");
    scanf(" %c",&sexo);
    printf("\n");

    if (sexo=='m' && idade>0 && idade<11)
        printf("Menino %s\n",nome);
    if (sexo=='f' && idade>0 && idade<11)
        printf("Menina %s\n",nome);
    if (sexo=='m' && idade>=11 && idade<20)
        printf("Rapaz %s\n",nome);
    if (sexo=='f' && idade>=11 && idade<20)
        printf("Moca %s\n",nome);
    if (sexo=='m' && idade>=20)
        printf("Adulto %s\n",nome);
    if (sexo=='f' && idade>=20)
        printf("Adulta %s\n",nome);

    printf("\n");

    return 0;
}
