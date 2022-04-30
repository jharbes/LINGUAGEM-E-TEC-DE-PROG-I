#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int n,m,k=0,u=0,aux;
//rodando programa
    printf("PROGRAMA QUE CRIA DOIS VETORES E TIRA SUA INTERSECCAO:\n\n");
    printf("\n");

    printf("Informe o numero de elementos do primeiro vetor: ");
    scanf("%i",&n);
    printf("\n");
    while (n<=0 || n>999){
        printf("NUMERO INFORMADO FORA DOS PARAMETROS! FAVOR REFAZER A OPERACAO.\n");
        printf("REDIGITE O NUMERO POSITIVO MENOR QUE 1000: ");
        scanf("%i",&n);
    }

    printf("Informe o numero de elementos do segundo vetor: ");
    scanf("%i",&m);
    printf("\n");
    while (m<=0 || m>999){
        printf("NUMERO INFORMADO FORA DOS PARAMETROS! FAVOR REFAZER A OPERACAO.\n");
        printf("REDIGITE O NUMERO POSITIVO MENOR QUE 1000: ");
        scanf("%i",&m);
    }
    printf("\n\n");

    int v1[n],v2[m],v3[m],v4[m];

    printf("Informe os valores do primeiro vetor:\n");
    for (int x=0; x<n; x++){
        printf("VETOR1[%i]=  ",x);
        scanf("%i",&v1[x]);
    }
    printf("\n\n");

    printf("Informe os valores do segundo vetor:\n");
    for (int x=0; x<m; x++){
        printf("VETOR2[%i]=  ",x);
        scanf("%i",&v2[x]);
    }
    printf("\n\n");

    for (int x=0; x<m; x++){
        for (int y=0; y<n; y++){
            if (v1[x]==v2[y]){
                v3[k]=v1[x];
                k++;
            }
    }
    }

    //for (int i=0; i<k; i++){
        for (int j=0; j<k-1; j++){
            if (v3[j]>v3[j+1]) {
                aux=v3[j];
                v3[j]=v3[j+1];
                v3[j+1]=aux;
            }
        }
    //}

    for (int x=0; x<k-1; x++){
        if ((v3[x]==v3[x+1]) && (v3[x+1]!=v3[x+2])){
            v4[u]=v3[x];
            u++;
        }
        }

    printf("VETOR 1\n");
    for (int x=0; x<n; x++){
        printf("VETOR1[%i]= %i\n",x,v1[x]);
    }
    printf("\n");

    printf("VETOR 2\n");
    for (int x=0; x<m; x++){
        printf("VETOR2[%i]= %i\n",x,v2[x]);
    }
    printf("\n");

    printf("VETOR 3\n");
    for (int x=0; x<m; x++){
        printf("VETOR3[%i]= %i\n",x,v3[x]);
    }
    printf("\n");





    return 0;
}
