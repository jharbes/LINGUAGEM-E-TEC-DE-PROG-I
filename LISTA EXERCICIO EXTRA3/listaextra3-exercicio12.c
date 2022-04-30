#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arq;
    char palavra[20],nomearquivo[20],parte[20];

    printf("Informe o nome do arquivo a ser aberto: ");
    gets(nomearquivo);

    printf("Informe a palavra a ser procurada: ");
    gets(palavra);

    arq = fopen(nomearquivo,"r");

    if(arq==NULL)
        printf("Falha na abertura do arquivo.\n");
    else
        while(fgets(parte,20,arq))
        printf("%s",parte);

    printf("\n\nPrograma encerrado");
    fclose(arq);
    return 0;
}
