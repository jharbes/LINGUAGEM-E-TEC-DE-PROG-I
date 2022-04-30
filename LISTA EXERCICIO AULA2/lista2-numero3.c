#include <stdio.h>


int main() {
//declarando variaveis
    char operacao;
    int n, x4;
    float x1,x2,x3,pot;
//rodando programa
    printf("qual operacao deseja efetuar? 1, 2, 3 ou 4?");
    scanf(" %c",&operacao);
    switch ( operacao ) {
        case '1':
            printf("qual o valor do lado do quadrado?");
            scanf("%f",&x1);
            printf("area do quadrado eh %f", x1*x1);
            break;
        case '2':
            printf("qual o valor da base do retangulo?");
            scanf("%f",&x1);
            printf("qual o valor da altura do retangulo?");
            scanf("%f",&x2);
            printf("area do retangulo eh %f", x1*x2);
            break;
        case '3':
            printf("qual o valor da base menor do trapezio?");
            scanf("%f",&x1);
            printf("qual o valor da base maior do trapezio?");
            scanf("%f",&x2);
            printf("qual o valor da altura do trapezio?");
            scanf("%f",&x3);
            printf("area do trapezio eh %f", (x1+x2)*(x3/2) );
            break;
        case '4':
            printf("qual o valor da base da potencia?");
            scanf("%f",&x1);
            printf("qual o valor do expoente da potencia?");
            scanf("%d",&x4);
            n=0;
            pot=1;
            while (n != x4){
                   pot=pot*x1;
                   n=n+1;
                   }
            printf("o valor procurado eh %f", pot);
            break;
        default:
            printf("operador desconhecido");
            }

    return 0;
}


