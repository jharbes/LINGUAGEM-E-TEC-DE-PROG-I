#include <stdio.h>
#include <string.h>
#include<stdlib.h>


int main() {
//declarando variaveis

    char letra,ini;
//rodando programa

    FILE *arq, *arq2;
  	arq = fopen("arq.txt", "w");

    printf("Digite os caracteres a serem salvos: (Digite 0 para finalizar) \n");

    while (letra!='0'){
        printf("Digite o caractere escolhido: ");
        fflush(stdin);
        scanf("%c",&letra);
        fprintf(arq," %c",letra);
       }
    fclose(arq);
	arq2 = fopen("arq.txt","r");

   	if (arq2 == NULL){
    	printf("Erro na abertura do arquivo. \n");
    	system("pause");
    	exit(1);
	}
    rewind(arq2);
 	ini = getc(arq2);


    while(ini!=EOF){
        printf(" %c ", ini);
        ini = getc(arq2);
    }


    return 0;
}
