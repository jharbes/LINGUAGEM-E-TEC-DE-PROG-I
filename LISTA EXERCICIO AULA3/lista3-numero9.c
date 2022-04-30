#include <stdio.h>
#include <math.h>


int main() {
//declarando variaveis

    float p,i,n,montante;

//rodando programa

   printf("qual o valor a ser aplicado mensalmente?\n");
   scanf("%f", &p);
   printf("qual o numero de meses a ser aplicado?\n");
   scanf("%f", &n);
   printf("qual a taxa mensal?\n");
   scanf("%f", &i);

   montante=p*(pow(1+(i/100),n)-1)/(i/100);

   printf("o montante é igual a: %f\n",montante);
return 0;
}
