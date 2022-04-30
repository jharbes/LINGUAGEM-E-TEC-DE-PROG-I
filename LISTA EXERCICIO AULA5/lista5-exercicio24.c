#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int aux=0,aux2=0;
    char palavra[51],palavra1[51];
//rodando programa

    printf("Entre com a primeira palavra: ");
    scanf("%s",&palavra);

    printf("Entre com a segunda palavra: ");
    scanf("%s",&palavra1);


    aux=strlen(palavra);
    aux2=strlen(palavra1);

    for (int y=0; y<=50; y++){
        if (palavra[y]!=palavra1[y]){
            if (palavra[y]<palavra1[y]){
                printf("A palavra %s vem primeiro na ordem alfabetica\n",palavra);
                break;
            }
            else{
                printf("A palavra %s vem primeiro na ordem alfabetica\n",palavra1);
                break;
            }
        }
    }
    return 0;
}
