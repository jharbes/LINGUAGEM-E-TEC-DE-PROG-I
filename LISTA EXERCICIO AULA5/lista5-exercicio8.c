#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int aux=0;
    char palavra[]="01001110";
//rodando programa


    for (int y=0; y<=strlen(palavra); y++){
            if (palavra[y]=='1'){
                aux++;
            }
    }

    printf("O numero de 1's que aparecem eh: %i",aux);


    return 0;
}
