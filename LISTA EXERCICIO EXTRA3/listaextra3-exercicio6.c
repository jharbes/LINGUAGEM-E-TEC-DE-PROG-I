#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int soma=0,n=0,i=1,k=1,maior,menor,somapar=0;
    float media,mediapar;
//rodando programa

    printf("Informe quantos numeros desejar, utilizar 0 (zero) para finalizar.\n");

    printf("N[0]= ");
    scanf("%d",&k);
    n++;
    soma=soma+k;
    maior=k;
    menor=k;
    if (k%2==0){
        somapar=somapar+k;
        i++;
    }

    while(k!=0){
        printf("N[%i]= ",n);
        scanf("%d",&k);
        n++;
        soma=soma+k;
        if (k%2==0 && k!=0){
            somapar=somapar+k;
            i++;
        }
        if (k>maior && k!=0)
            maior=k;
        if (k<menor && k!=0)
            menor=k;
        }

    n--;

    media=soma/n;
    mediapar=somapar/(i-1);

    printf("A soma dos numeros digitado eh %d\n",soma);
    printf("A quantidade de numeros digitados eh %d\n",n);
    printf("A media dos numeros digitados eh %f\n",media);
    printf("O maior numero digitado eh %d\n",maior);
    printf("O menor numero digitado eh %d\n",menor);
    printf("A media dos numeros pares eh %f\n",mediapar);

    return 0;
}
