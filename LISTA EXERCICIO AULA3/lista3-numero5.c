#include <stdio.h>


int main() {
//declarando variaveis

    float soma=0,n=0,total=0;
    float media;

//rodando programa

    do{
    printf("digite o numero desejado: (numero negativo para finalizar)");
    scanf(" %f",&n);
        if(n>=0){
            soma=soma+n;
            total=total+1;
            }
    } while (n>=0);
    printf("o total de numero sao %f\n",total);
    printf("a soma dos numeros eh %f\n",soma);
    media=soma/total;
    printf("a media dos numeros eh %f\n",media);
    printf("FIM\n");
    return 0;
}
