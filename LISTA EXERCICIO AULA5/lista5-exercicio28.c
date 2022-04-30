#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int aux=0,aux2=0,k=0,i=0,n=0;
    char palavra[51],palavra1[51],palavra2[51];
//rodando programa

    printf("Entre com a cadeia A:");
    gets(palavra);
    printf("\n");
    printf("Entre com a cadeia B:");
    gets(palavra1);

    aux=strlen(palavra);
    aux2=strlen(palavra1);


    if (aux2<aux){
        printf("A cadeia A nao ocorre na cadeia B.\n");
    }
    else {
        for (int x=0; x<=(aux2-aux+1); x++){
            for (int y=0; y<=aux; y++){
                if (palavra1[x]==palavra[y]){
                    for (int z=x; z<=(x+aux-1); z++){
                        palavra2[n]=palavra1[z];
                        n++;
                    }
                    }
                if (strcmp(palavra,palavra2)){
            }
            else
                k++;
            }
        }
    }
    if (k>0)
        printf("A cadeia A se repete na cadeia B %i vez(es).\n",k);
    else
        printf("A cadeia A nao ocorre na cadeia B.\n");

    return 0;
}
