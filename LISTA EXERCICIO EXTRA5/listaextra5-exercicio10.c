#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    FILE* arq;
    char retorno[100];
    int caracteres=0, linhas=0, palavras=0, letras[26], posicao_da_soma;

    // preenche o vetor com zero
    for (size_t i = 0; i < 26; i++) letras[i] = 0;

    system("cls");

    arq = fopen("arquivo.txt", "r");

    if(arq == NULL){
        printf("\nFalha na abertura do arquivo\n");
        fclose(arq);
    }else{
        while(fgets(retorno, 100, arq)){
            linhas++;
            caracteres += strlen(retorno);
            for (size_t i = 0; i <= strlen(retorno); i++){
                // faz o controle da soma das palavras
                if(retorno[i]==32 || retorno[i]=='\0' || retorno[i]=='\t') palavras++;

                // faz o controle da soma de cada letra que se repete
                if((retorno[i]>=97 && retorno[i]<=122) || (retorno[i]>=65 && retorno[i]<=90)){
                    posicao_da_soma = tolower(retorno[i]) - 97;
                    letras[posicao_da_soma]++;
                }
            }
        }
        fclose(arq);
    }

    printf("\nO arquivo possui %d caracteres, %d linhas e %d palavras", caracteres, linhas, palavras);
    printf("\nAbaixo seguem as letras e a quantidade de repeticoes\n\n");

    for (size_t i = 0, j = 0; i < 26; i++){

        if (letras[i]!=0){
            printf("Letra: %c, repeticoes: %d vez(es)\t\t", toupper(i+97), letras[i]);
            j++;
        }

        if(j%4==0 && j!=0) {
            printf("\n"); j=0;
        }
    }
    printf("\n");
}
