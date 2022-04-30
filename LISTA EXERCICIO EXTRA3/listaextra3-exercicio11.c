#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int aux=0,aux2,k,w,n=0,q,m;
    char s1[20],s2[20],s3[20],s4[20],menu,letra,c1,c2;
//rodando programa

    MENU:

    printf("Escolha a opcao no menu:\n");
    printf("\n");
    printf("a- Ler uma string S1 (tamanho maximo 20 caracteres);\n");
    printf("b. Imprimir o tamanho da string S1;\n");
    printf("c. Comparar a string S1 com uma nova string S2 fornecida pelo usuario e imprimir o resultado da comparacao;\n");
    printf("d. Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenacao;\n");
    printf("e. Imprimir a string S1 de forma reversa;\n");
    printf("f. Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse ser informado pelo usuario;\n");
    printf("g. Substituir a primeira ocorrencia do caractere C1 da string s1 pelo caractere C2. Os caracteres C1 e C2 serão lidos pelo usuario;\n");
    printf("h. Verificar se uma string s2 eh substring de s1. A string s2 deve ser informada pelo usuario;\n");
    printf("i. Retornar uma substring da string s1. Para isso o usuario deve informar a partir de qual posicaoo deve ser criada a substring e qual eh o tamanho da substring.\n");
    printf("Opcao: ");
    scanf(" %c",&menu);

    switch(menu) {
        case 'a':
            printf("Entre com a string S1: ");
            scanf("%s",s1);
            aux=strlen(s1);
            printf("\n");
            getch();
            goto MENU;

        case 'b':
            aux=strlen(s1);
            printf("O tamanho de S1 eh %i\n",aux);
            printf("\n");
            getch();
            goto MENU;

        case 'c':
            printf("Entre com a nova string S2: ");
            scanf("%s",s2);
            if (strcmp(s1,s2))
                printf("S1 eh diferente de S2.");
                else printf("S1 eh igual a S2.");
            printf("\n");
            getch();
            goto MENU;

        case 'd':
            printf("Entre com a nova string S2: ");
            scanf("%s",s2);
            strcat(s1,s2);
            printf("A nova string fica %s",s1);
            getch();
            goto MENU;

        case 'e':
            printf("A string S1 de forma reversa eh: ");
            for (int y=aux; y>=0; y--){
                printf("%c",s1[y]);
            }
            printf("\n");
            getch();
            goto MENU;
        case 'f':
            printf("Qual caractere deseja contar quantas vezes aparece em S1: ");
            scanf(" %c",&letra);
            printf("\n");
            k=0;
            for (int x=0; x<=aux; x++){
                if (s1[x]==letra)
                    k++;
                }
            printf("O caractere selecionado aparece %i vezes em S1.\n",k);
            getch();
            goto MENU;
        case 'g':
            printf("Entre com o caractere C1: ");
            scanf(" %c",&c1);
            printf("\n");
            printf("Entre com o caractere C2: ");
            scanf(" %c",&c2);
            printf("\n");
            w=0;
            for (int x=0; x<=aux; x++){
                if (w==0){
                    if (s1[x]==c1){
                        s1[x]=c2;
                        w++;
                }
                }
            }
            printf("A string S1 apos a substituicao eh: %s",s1);
            printf("\n");
            getch();
            goto MENU;

        case 'h':
            printf("Entre com a string S2: ");
            scanf("%s",s2);
            aux=strlen(s1);
            aux2=strlen(s2);

            if (aux2>aux){
                printf("A string S2 nao eh substring de S1.\n");
                }
                else {
                    for (int x=0; x<=(aux-aux2+1); x++){
                        for (int y=0; y<=aux2; y++){
                            if (s1[x]==s2[y]){
                                for (int z=x; z<=(x+aux-1); z++){
                                    s3[n]=s1[z];
                                    n++;
                                    }
                                }
                            if (strcmp(s2,s3)){
                            }
                            else
                                k++;
                            }
                        }
                    }
            if (k>0)
                printf("A S2 eh substring de S1\n",k);
            else
                printf("A S2 nao eh substring de S1.\n");
            printf("\n");
            getch();
            goto MENU;

        case 'i':
            printf("Escolha a posicao inicial da substring de S1 desejada: ");
            scanf("%i",&q);
            printf("\n");
            printf("Qual o tamanho da substring de S1 desejada: ");
            scanf("%i",&m);
            printf("\n");
            for (int x=0; x<m; x++){
                s4[x]=s1[q];
                q++;
            }
            printf("A substring criada eh: %s\n",s4);
            getch();
            goto MENU;

        default:
            printf("Opcao invalida.\n");
            break;
    }

    return 0;
}
