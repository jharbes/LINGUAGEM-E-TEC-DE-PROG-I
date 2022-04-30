#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int a,b,v1[5],v2[5],v3[5],n=0;
//rodando programa
    printf("PROGRAMA QUE SOMA DOIS VETORES PROVENIENTES DE INVERSAO DE INTEIROS:\n\n");
    printf("\n");

    printf("Informe o primeiro numero inteiro positivo menor que 10000: ");
    scanf("%i",&a);
    printf("\n");
    while (a<=0 || a>10000){
        printf("NUMERO INFORMADO FORA DOS PARAMETROS! FAVOR REFAZER A OPERACAO.\n");
        printf("REDIGITE O NUMERO POSITIVO MENOR QUE 10000: ");
        scanf("%i",&a);
    }

    printf("Informe o segundo numero inteiro positivo menor que 10000: ");
    scanf("%i",&b);
    printf("\n");
    while (b<=0 || b>10000){
        printf("NUMERO INFORMADO FORA DOS PARAMETROS! FAVOR REFAZER A OPERACAO.\n");
        printf("REDIGITE O NUMERO POSITIVO MENOR QUE 10000: ");
        scanf("%i",&b);
    }

    if (a>=1000){
        v1[0]=a%10;
        v1[1]=(a%100-a%10)/10;
        v1[2]=(a%1000-a%100)/100;
        v1[3]=(a-a%1000)/1000;
    }

    if (b>=1000){
        v2[0]=b%10;
        v2[1]=(b%100-b%10)/10;
        v2[2]=(b%1000-b%100)/100;
        v2[3]=(b-b%1000)/1000;
    }

    if (a>=100 && a<1000){
        v1[0]=a%10;
        v1[1]=(a%100-a%10)/10;
        v1[2]=(a-a%100)/100;
        v1[3]=0;
    }

    if (b>=100 && b<1000){
        v2[0]=b%10;
        v2[1]=(b%100-b%10)/10;
        v2[2]=(b-b%100)/100;
        v2[3]=0;
    }

    if (a>=10 && a<100){
        v1[0]=a%10;
        v1[1]=(a-a%10)/10;
        v1[2]=0;
        v1[3]=0;
    }

    if (b>=10 && b<100){
        v2[0]=b%10;
        v2[1]=(b-b%10)/10;
        v2[2]=0;
        v2[3]=0;
    }

    if (a>=1 && a<10){
        v1[0]=a;
        v1[1]=0;
        v1[2]=0;
        v1[3]=0;
    }

    if (b>=1 && b<10){
        v2[0]=b;
        v2[1]=0;
        v2[2]=0;
        v2[2]=0;
    }

    for (int x=0; x<=3; x++){
        v3[x]=v1[x]+v2[x];
    }

    printf("VETOR1= ");
    for (int x=0; x<=3; x++){
        printf("%i\t",v1[x]);
    }
    printf("\n");

    printf("VETOR2= ");
    for (int x=0; x<=3; x++){
        printf("%i\t",v2[x]);
    }
    printf("\n");

    printf("\n");
    printf("VETOR SOMA\n");

    printf("VETOR3= ");
    for (int x=0; x<=3; x++){
        printf("%i\t",v3[x]);
    }



    return 0;
}
