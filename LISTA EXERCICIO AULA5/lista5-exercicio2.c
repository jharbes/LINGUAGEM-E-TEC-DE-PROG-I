#include <stdio.h>


int main() {
//declarando variaveis
    int aux=0, aux2=0;
    char palavra[10]="cachorro";
//rodando programa


    for (int y=0; y<=10; y++){
            if (palavra[y]!=0) {
            aux++;
            }
        }

    printf("o comprimento da string eh %i",aux);


    return 0;
}
