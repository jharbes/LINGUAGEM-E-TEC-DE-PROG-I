#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int aux=0,aux2=0,aux3=0,aux4=0;
    char vetor[81];
//rodando programa

    printf("Entre com a string:");
    gets(vetor);

    aux=strlen(vetor);
    printf("A string possui %i caracteres\n",aux);

    for (int x=0; x<=aux; x++){
        if (vetor[x]=='!' || vetor[x]==','  || vetor[x]=='.' || vetor[x]=='?' || vetor[x]==':' || vetor[x]==';')
            aux2++;
        if (vetor[x]>=48 && vetor[x]<=57)
            aux3++;
        if (vetor[x]>=97 && vetor[x]<=122)
            aux4++;
    }

    printf("A string possui %i caracteres de pontuacao.\n",aux2);
    printf("A string possui %i caracteres numeros.\n",aux3);
    printf("A string possui %i caracteres de letras minusculas.\n",aux4);


    return 0;
}
