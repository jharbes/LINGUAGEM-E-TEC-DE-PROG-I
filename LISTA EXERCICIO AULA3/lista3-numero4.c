#include <stdio.h>


int main() {
//declarando variaveis

    int raul=150;
    int jose=110;
    int x=0;

//rodando programa

   do {
    raul=raul+2;
    jose=jose+5;
    x=x+1;
    } while (jose<=raul);
    printf("o numero de anos necessarios serao %d", x);
    return 0;
}
