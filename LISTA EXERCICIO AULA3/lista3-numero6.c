#include <stdio.h>


int main() {
//declarando variaveis

    float soma=0,n=0,total=0,peso=0,gordo=0,magro=99999999,media;

//rodando programa

    do{
        printf("digite o numero de identificacao: (0 para finalizar)");
        scanf(" %f",&n);
            if (n!=0) {
                    printf("digite o peso desse boi:");
                    scanf(" %f",&peso);
                    n=n+1;
                    soma=soma+peso;
                    if (peso>gordo) {
                        gordo=peso;
                    }
                    if (peso<magro) {
                        magro=peso;
                    }
            }
        } while (n!=0);
    printf("o total de numero sao %f\n",total);
    media=soma/total;
    printf("a media dos numeros eh %f\n",media);
    printf("o boi mais gordo pesa: %f\n",gordo);
    printf("o boi mais magro pesa: %f\n",magro);
    printf("FIM\n");
    return 0;
}
