#include <stdio.h>

int main(){
    float alturaDegrau = 0, alturaFinal = 0;

    printf("Digite a altura do degrau\n");
    scanf("%f",&alturaDegrau);

    printf("Digite a altura que deseja alcancar\n");
    scanf("%f",&alturaFinal);

    printf("A quantidade de degraus que voce ira subir eh de: %.2f ",alturaFinal/alturaDegrau);
return 0;
}



