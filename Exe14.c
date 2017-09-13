#include <stdio.h>

int main(){
    float base = 0, altura = 0;

    printf("Digite o valor da base do triangulo\n");
    scanf("%f",&base);
    printf("Digite o valor da altura do triangulo\n");
    scanf("%f",&altura);

    printf("O valor da area do triangulo eh = %.2f",(base*altura)/2);
return 0;
}


