#include <stdio.h>


int main() {
//declarando variaveis
    int aux=0;
    char palavra[20];
//rodando programa

    printf("Entre com um nome:");
    scanf("%s",&palavra);

    if (palavra[0]=='a' || palavra[0]=='A') {
        printf("%s",palavra);
    }

    return 0;
}
