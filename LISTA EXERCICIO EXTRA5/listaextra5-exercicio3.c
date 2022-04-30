#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    char menu;
    float s1,s2,s3,s4,s5,s6,s7,s8;
//rodando programa

    MENU:

    printf("Escolha a opcao no menu:\n");
    printf("\n");
    printf("1- SOMA DE DOIS NUMEROS;\n");
    printf("2- DIFERENCA ENTRE DOIS NUMEROS (MAIOR PELO MENOR);\n");
    printf("3- PRODUTO ENTRE DOIS NUMEROS;\n");
    printf("4- DIVISAO ENTRE DOIS NUMEROS (O DENOMINADOR NAO PODE SER ZERO).\n");
    printf("Opcao: ");
    scanf(" %c",&menu);

    switch(menu) {
        case '1':
            printf("Entre com o primeiro numero: ");
            scanf("%f",&s1);
            printf("Entre com o segundo numero: ");
            scanf("%f",&s2);
            printf("\n");
            printf("O resultado eh %f.\n",s1+s2);
            getch();
            goto MENU;

        case '2':
            printf("Entre com o primeiro numero: ");
            scanf("%f",&s3);
            printf("Entre com o segundo numero: ");
            scanf("%f",&s4);
            printf("\n");
            if (s3>s4)
                printf("O resultado eh %f.\n",s3-s4);
            else
                printf("O resultado eh %f.\n",s4-s3);
            getch();
            goto MENU;

        case '3':
            printf("Entre com o primeiro numero: ");
            scanf("%f",&s5);
            printf("Entre com o segundo numero: ");
            scanf("%f",&s6);
            printf("\n");
            printf("O resultado eh %f.\n",s5*s6);
            getch();
            goto MENU;

        case '4':
            printf("Entre com o numerador da divisao: ");
            scanf("%f",&s7);
            printf("Entre com o denominador da divisao: ");
            scanf("%f",&s8);
            if (s8!=0){
                printf("\n");
                printf("O resultado eh %f.\n",s7/s8);}
            else
                printf("Denominador invalido!\n\n");
            getch();
            goto MENU;

        default:
            printf("Opcao invalida.\n");
            break;
    }

    return 0;
}
