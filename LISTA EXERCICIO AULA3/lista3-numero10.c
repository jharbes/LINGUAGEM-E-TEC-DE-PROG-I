#include <stdio.h>


int main() {
//declarando variaveis

    float b,n,pot=1;
    int x=0;

//rodando programa


    printf("informe o valor de b, (b>=2)\n");
    scanf("%f", &b);
    printf("informe o valor de n, (n>=1 e n inteiro)\n");
    scanf("%f", &n);

    if (b>=2 && n>=1) {
            while (x!=n){
            pot=pot*b;
            x++;
            }
            printf("o valor solicitado eh %f\n", pot);
        }
        else{
            printf("valores informados em desacordo com especificacoes\n");
        }


    return 0;
}
