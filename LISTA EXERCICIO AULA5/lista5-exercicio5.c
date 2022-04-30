#include <stdio.h>


int main() {
//declarando variaveis
    int aux=0;
    char palavra[20];
//rodando programa

    printf("Entre com um nome:");
    scanf("%s",&palavra);

    for (int y=0; y<=20; y++){
            if (palavra[y]!=0)
                aux++;
            else if (palavra[y]==0)
                break;
    }

    printf("o numero de letras do nome eh %i",aux);

    return 0;
}
