#include <stdio.h>


int main() {
//declarando variaveis
    float altura,somahomem,somamulher,maior,menor;
    int male, female;
    char sexo;
//rodando programa
    maior=0;
    menor=300;
    somahomem=0;
    somamulher=0;
    male=0;
    female=0;
    for(int x = 1; x<=33; ++x){
        printf("\ndigite o sexo da pessoa: (apenas m ou f)\n");
        scanf(" %c",&sexo);
        printf("\ndigite a altura dessa pessoa em centimetros:\n");
        scanf(" %f",&altura);
        if (altura>maior){
            maior=altura;
            }
        if (altura<menor){
            menor=altura;
            }
        if (sexo=='m'){
            male=male+1;
            somahomem=altura+somahomem;
            }
            else {
                female=female+1;
                somamulher=altura+somamulher;
            }
    }
    printf("a maior altura da turma eh %f\n",maior);
    printf("a menor altura da turma eh %f\n",menor);
    printf("a media de altura dos homens eh %f\n",somahomem/male);
    printf("a media da altura das mulheres eh %f\n",somamulher/female);
    return 0;
}
