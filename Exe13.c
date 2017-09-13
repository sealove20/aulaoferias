#include <stdio.h>

int main(){
    float deposito = 0, taxaJuros = 0;

    printf("Digite o valor do deposito\n");
    scanf("%f",&deposito);
    printf("Digite o valor da taxa de juros\n");
    scanf("%f",&taxaJuros);

    printf("O valor do rendimento foi de %.2f\n",deposito*taxaJuros/100);
    printf("O valor deposito apos o rendimento calculado eh = %.2f", (deposito*taxaJuros/100)+deposito);
return 0;
}


