#include <stdio.h>


int main() {
//declarando variaveis
    int aux=0,idade;
    char palavra[20],sexo;
//rodando programa

    printf("Entre com um nome:");
    scanf("%s",&palavra);

    printf("Entre com o sexo: (M ou F):");
    scanf(" %c",&sexo);

    printf("Entre com a idade:");
    scanf("%i",&idade);


    if (sexo=='F' || sexo=='f') {
        printf("%s\n",palavra);
        printf("ACEITA\n");
    }
    else {
        printf("NAO ACEITA\n");
    }


    return 0;
}
