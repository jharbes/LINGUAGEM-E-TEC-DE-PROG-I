#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int aux=0,aux2=0,idade=0,novo1=999,velho1=0;
    char palavra[51],novo[51],velho[51];
//rodando programa

    for (int y=0; y<=10; y++){
        while (idade>=0){
            printf("Entre com o nome da pessoa:");
            scanf("%s",&palavra);

            printf("informe a idade da pessoa:");
            scanf("%i",&idade);

            if (idade>=velho1 && idade>=0){
                velho1=idade;
                strcpy(velho,palavra);
            }
            if (idade<=novo1 && idade>=0){
                novo1=idade;
                strcpy(novo,palavra);
            }
        }
    }

    printf("A pessoa mais jovem eh %s\n",novo);
    printf("Ele possui a idade de %i\n",novo1);
    printf("\n");
    printf("A pessoa mais velha eh %s\n",velho);
    printf("Ele possui a idade de %i\n",velho1);

    return 0;
}
