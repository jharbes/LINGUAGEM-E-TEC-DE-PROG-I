#include <stdio.h>
#include <string.h>

int main(){
    FILE *arq;
    char string[30], produtos[10][30];
    int contador=0, item;

    system("cls");
    
    arq = fopen("produtos.txt", "r");

    if(arq == NULL)
        printf("Falha na abertura do arquivo\n");
    else
        while(fgets(string, 100, arq)){
            strcpy(produtos[contador], string);
            contador++;
        }

    printf("PRODUTOS\n\n");

    for (size_t i = 0; i < contador; i++){
        printf("%d  ", i);
        for (size_t j = 1; j < strlen(produtos[i]); j++){
            printf("%c", produtos[i][j]);
        }
    }

    printf("\n\nEscolha um produto para que seja verificada sua condicao de estoque (informe o numero do produto): ");
    scanf("%d", &item);

    if(produtos[item][0]=='N') printf("\n\nSEM ESTOQUE");
    else printf("\n\nSIM, EM ESTOQUE");
    
    printf("\n\nPrograma encerrado");
    fclose(arq);
    return 0;
}