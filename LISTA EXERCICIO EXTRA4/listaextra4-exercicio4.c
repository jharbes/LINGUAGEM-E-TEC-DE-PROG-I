#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int n=1;
//rodando programa
    printf("IMPRIMINDO DE 1 ATE 100.\n");
    printf("\n");

    for (int x=1; x<=100; x++)
        printf("%i\t",x);

    printf("\n");

    while (n<=100){
        printf("%i\t",n);
        n++;
    }

    n=1;
    printf("\n");

    do {
        printf("%i\t",n);
        n++;
    } while (n<=100);

    return 0;
}
