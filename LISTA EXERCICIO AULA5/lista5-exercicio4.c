#include <stdio.h>


int main() {
//declarando variaveis
    int aux=0;
    char palavra[20];
//rodando programa

    printf("Entre com um nome:");
    scanf("%s",&palavra);

    for (int y=0; y<=3; y++){
            printf("%c",palavra[y]);
            }


    return 0;
}
