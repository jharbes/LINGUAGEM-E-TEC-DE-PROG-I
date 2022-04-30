#include <stdio.h>
#include <stdlib.h>

int main() {
    //declarando variaveis
	char nomeArquivo[20];
	int total=0;

	//rodando programa
	FILE *arq;
	printf("Informe o nome do arquivo a ser aberto: ");
	scanf("%s", nomeArquivo);
	arq=fopen(nomeArquivo, "rt");
	if (arq==NULL) {
		printf("Arquivo nao existe.");
		exit(1);
	}

	while (getc(arq)!=EOF){
        if (getc(arq)=='\n')
		total++;
	}
	total++;

	printf("O numero de linhas do arquivo sao de %d", total);
	return 0;
}
