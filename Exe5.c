#include <stdio.h>

int main(){
    float valorPago = 0;

    printf("Digite o valor da conta\n");
    scanf("%f",&valorPago);

    printf("O valor total a ser pago eh de: %.2f R$",valorPago*10/100);
return 0;
}


