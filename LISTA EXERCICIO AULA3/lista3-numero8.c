#include <stdio.h>


int main() {
//declarando variaveis

    int idade,somaidruim=0,notimo=0,nbom=0,nregular=0,nruim=0,npessimo=0,idadegp=0;
    char opiniao;

//rodando programa

    for (int i=1; i<=100; i++){
        printf("qual a sua idade?");
        scanf(" %i",&idade);
        printf("qual sua opiniao sobre o filme?\n");
        printf("escolha: otimo (1), bom (2), regular (3), ruim (4) ou pessimo (5):\n");
        scanf(" %c",&opiniao);
        if (opiniao=='5') {
            if (idade>idadegp) {
                idadegp=idade;
            }
        }
        switch(opiniao) {
            case '1':
                notimo++; break;
            case '2':
                nbom++; break;
            case '3':
                nregular++; break;
            case '4':
                nruim++;
                somaidruim=somaidruim+idade; break;
            case '5':
                npessimo++; break;
            default:
                printf("opiniao invalida");
            }
        }
    printf("a quantidade de respostas otimo eh %i\n",notimo);
    printf("a diferenca percentual entre respostas regular e bom eh %i\n",nregular-nbom);
    printf("a media de idade das pessoas que responderam ruim foi %i\n",somaidruim/nruim);
    printf("a porcentagem de respostas pessimo eh %i\n",npessimo);
    printf("a maior idade que usou a opcao pessimo foi %i\n",idadegp);
    return 0;
}
