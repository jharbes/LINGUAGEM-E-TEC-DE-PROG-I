#include <stdio.h>


int main() {
//declarando variaveis

    float soma=0,total=0,n,peso=0,gordo=0,magro=99999999,media,ngordo,nmagro;

//rodando programa

    do{
        printf("digite o numero de identificacao: (0 para finalizar)");
        scanf(" %f",&n);
            if (n!=0) {
                    printf("digite o peso desse boi:");
                    scanf(" %f",&peso);
                    total=total+1;
                    soma=soma+peso;
                    if (peso>gordo) {
                        gordo=peso;
                        ngordo=n;
                    }
                    if (peso<magro) {
                        magro=peso;
                        nmagro=n;
                    }
            }
        } while (n!=0);
    printf("o total de numero sao %f\n",total);
    media=soma/total;
    printf("a media do peso eh %f\n",media);
    printf("o numero do boi mais gordo eh %f\n",ngordo);
    printf("o boi mais gordo pesa: %f\n",gordo);
    printf("o numero do boi mais magro eh %f\n",nmagro);
    printf("o boi mais magro pesa: %f\n",magro);
    printf("FIM\n");
    return 0;
}
