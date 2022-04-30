#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int aux=0;
    char palavra[20],palavra2[20];
//rodando programa

    printf("Entre com a primeira string:");
    scanf("%s",&palavra);

    printf("Entre com a segunda string:");
    scanf("%s",&palavra2);


    for (int y=0; y<=strlen(palavra); y++){
            if (palavra[y]!=palavra2[y]){
                aux++;
            }
    }

    if (aux!=0)
        printf("STRINGS DIFERENTES");
    else
        printf("STRINGS IGUAIS");


    return 0;
}
