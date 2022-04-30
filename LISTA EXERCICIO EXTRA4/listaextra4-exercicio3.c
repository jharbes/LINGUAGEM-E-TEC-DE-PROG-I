#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    float a,b,c;
//rodando programa
    printf("ESTUDO DO TRIANGULO.\n");
    printf("\n");

    printf("Informe o tamanho do lado A do triangulo: ");
    scanf("%f",&a);
    printf("\n");

    printf("Informe o tamanho do lado B do triangulo: ");
    scanf("%f",&b);
    printf("\n");

    printf("Informe o tamanho do lado C do triangulo: ");
    scanf("%f",&c);
    printf("\n");

    if (a<b+c && b<a+c && c<a+b){
        printf("Triangulo ABC existe.\n");
        if (a==b && a==c)
            printf("Triangulo ABC eh equilatero.\n");
            else if (a==b || a==c || b==c)
                printf("Triangulo ABC eh isosceles\n");
        if (a!=b && a!=c && b!=c)
            printf("Triangulo ABC eh escaleno.\n");
    }
    else printf("Triangulo ABC nao existe.\n");

    return 0;
}
