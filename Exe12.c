#include <stdio.h>

int main(){
    float salario = 0;

    printf("Digite o valor atual do salario do funcionario\n");
    scanf("%f",&salario);

    printf("O novo valor do salario eh = %.2f", (salario*25/100) + salario);
return 0;
}

