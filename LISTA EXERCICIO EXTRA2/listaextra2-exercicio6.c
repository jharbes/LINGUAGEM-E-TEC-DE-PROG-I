#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
//declarando variaveis
    int habitantes;
    float valor,maior,menor,consumo,total=0,total1=0,total2=0,total3=0;
    char codigo;
//rodando programa

    printf("Entre com o numero de habitantes da cidade: ");
    scanf("%i",&habitantes);
    printf("\n");

    printf("Informe o valor do kwh nesta cidade: ");
    scanf("%f",&valor);
    printf("\n");

    printf("Qual o consumo mensal do habitante numero 1: ");
    scanf("%f",&consumo);
    printf("Qual o codigo desse consumidor? 1-Residencial, 2-Comercial ou 3-Industrial: ");
    scanf(" %c",&codigo);
    switch(codigo){
        case '1':
            total1=total1+consumo; break;
        case '2':
            total2=total2+consumo; break;
        case '3':
            total3=total3+consumo; break;
            }
    printf("\n");

    total=total+consumo;
    maior=consumo;
    menor=consumo;

    for (int x=2; x<=habitantes; x++){
        printf("Qual o consumo mensal do habitante numero %i: ",x);
        scanf("%f",&consumo);
        total=total+consumo;
        if (consumo>maior)
            maior=consumo;
        else if (consumo<menor)
            menor=consumo;
        printf("Qual o codigo desse consumidor? 1-Residencial, 2-Comercial ou 3-Industrial: ");
        scanf(" %c",&codigo);
        switch(codigo){
            case '1':
                total1=total1+consumo; break;
            case '2':
                total2=total2+consumo; break;
            case '3':
                total3=total3+consumo; break;
                }
    }

    printf("\n");

    printf("O maior consumo foi %f\n",maior);
    printf("O menor consumo foi %f\n",menor);
    printf("A media de consumo por habitante foi %f\n",total/habitantes);
    printf("O total de consumo na categoria 1 foi de %f\n",total1);
    printf("O total de consumo na categoria 2 foi de %f\n",total2);
    printf("O total de consumo na categoria 3 foi de %f\n",total3);

    return 0;
}
