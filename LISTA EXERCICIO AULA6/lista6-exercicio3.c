#include <stdio.h>

int main(){
    FILE *arq;
    char string[40], nome_arquivo[20];

    system("cls");

    printf("Informe o nome do arquivo a ser aberto: ");
    gets(nome_arquivo);

    printf("\nConteudo do arquivo\n\n");

    arq = fopen(nome_arquivo, "r");

    if(arq == NULL)
        printf("Falha na abertura do arquivo\n");
    else
        while(fgets(string, 100, arq))
        printf("%s", string);
        
    printf("\n\nPrograma encerrado");
    fclose(arq);
    return 0;
}