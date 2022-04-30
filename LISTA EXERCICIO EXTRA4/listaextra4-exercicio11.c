#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int n,k=0;

//rodando programa
    FILE *arq;
  	arq = fopen("lista.txt","rt");

  	if (arq==NULL) {
		printf("Arquivo nao existe.");
		exit(1);
	}

    printf("CALCULANDO O TOTAL DA COMPRA.\n");
    printf("\n");


    while (arq!=EOF){
        fscanf(arq,"%d",n);
        k=k+n;
        fscanf(arq,"\n");
	}

	printf("O valor total das compras sera: R$%i",k);

    return 0;
}
