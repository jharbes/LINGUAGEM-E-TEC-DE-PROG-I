

#include <stdio.h>


int main() {
//declarando variaveis
    int estoque, fornec;
//rodando programa
    printf("digite o numero de itens em estoque:");
    scanf("%d",&estoque);
    printf("digite o numero de itens a serem fornecidos:");
    scanf("%d",&fornec);
    if (fornec<=estoque) {
        estoque=estoque-fornec;
        printf("estoque atualizado :%d",estoque);
    }
    else {
        printf("itens insuficientes no estoque!");
    }
    return 0;
}
