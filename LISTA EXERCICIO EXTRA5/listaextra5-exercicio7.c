#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int n;
//rodando programa
    printf("PROGRAMA QUE CALCULA OS NUMEROS NATURAIS ABAIXO DE 1000 QUE SAO MULTIPLOS DE 3 OU 5:\n\n");
    printf("\n");

    printf("\n");
    for (int x=1; x<1000; x++){
        if (x%3==0 || x%5==0)
            printf("%i\t",x);
    }

    return 0;
}
