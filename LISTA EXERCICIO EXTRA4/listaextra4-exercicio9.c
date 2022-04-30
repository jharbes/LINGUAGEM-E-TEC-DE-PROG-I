#include <stdio.h>
#include <string.h>

int main() {
//declarando variaveis
    int n=0;
    char a[4],b;

//rodando programa
    printf("INFORMAR O DIA DA SEMANA: SEG, TER, QUA, QUI ou SEX.\n");
    printf("\n");

    printf("Informe o dia desejado com tres caracteres conforme acima: ");

    gets(a);
    printf("\n");

    switch(a[2]){
        case 'g':
            printf("Segunda-feira"); break;
        case 'r':
            printf("Terca-feira"); break;
        case 'a':
            printf("Quarta-feira"); break;
        case 'i':
            printf("Quinta-feira"); break;
        case 'x':
            printf("Sexta-feira"); break;
        case 'b':
            printf("Sabado"); break;
        case 'm':
            printf("Domingo"); break;
        default: break;
    }

    return 0;
}
