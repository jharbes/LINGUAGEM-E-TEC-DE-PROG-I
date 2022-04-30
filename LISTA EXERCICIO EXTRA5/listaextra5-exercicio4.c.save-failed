#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int d,m,a;
//rodando programa
    printf("PROGRAMA VERIFICADOR DE VALIDADE DE DATA:\n");
    printf("\n");

    printf("Informe o dia: ");
    scanf("%i",&d);
    printf("\n");

    printf("Informe o mes: ");
    scanf("%i",&m);
    printf("\n");

    printf("Informe o ano: ");
    scanf("%i",&a);
    printf("\n");

    if (d>0 && d<31 && m>0 && m<13 && m!=2){
        if (d==31){
            if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
                printf("DATA VALIDA.\n");
            else
                printf("DATA INVALIDA.\n");
                }
    }

    if (m==2 && d==29){
        if (a%4==0 && a%100!=0)
                printf("DATA VALIDA.\n");
            else if (a%4!=0 && a%400==0)
                printf("DATA VALIDA.\n");
            else if (a%4!=0 && a%400!=0)
                printf("DATA INVALIDA.\n");
    }

    if (m==2 && d>0 && d<29)
        printf("DATA VALIDA.\n");

    if (m==2 && d>29)
        printf("DATA INVALIDA.\n");



    printf("\n");

    return 0;
}
