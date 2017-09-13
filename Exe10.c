#include <stdio.h>

int main(){
    int horaInicio = 0, horaFinal = 0, minInicial = 0, minFinal = 0, resH = 0, resM = 0;

    printf("Digite o valor da hora inicial\n");
    scanf("%d",&horaInicio);
    printf("Digite o valor do minuto inicial\n");
    scanf("%d",&minInicial);

    printf("Digite o valor da hora Final\n");
    scanf("%d",&horaFinal);
    printf("Digite o valor do minuto final\n");
    scanf("%d",&minFinal);

    resH = horaFinal - horaInicio;
    resM = minFinal - minInicial;

    printf("Ja se passaram %d horas e %d minutos",resH, resM);
return 0;
}
