#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int aux=0;
    char palavra[]="01001110";
//rodando programa


    for (int y=0; y<=strlen(palavra); y++){
            if (palavra[y]=='0'){
                palavra[y]='1';
            }
    }

    printf("O novo string eh: %s",palavra);


    return 0;
}
