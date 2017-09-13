#include <stdio.h>

int main(){
    float salarioInicial = 0, salarioFinal = 0;
     int percentualAumento = 0;

    printf("Digite o valor do salario inicial do funcionario\n");
    scanf("%f",&salarioInicial);

    printf("Digite o valor percentual do aumento do funcionario\n");
    scanf("%d",&percentualAumento);

    printf("O valor de aumento do salario do funcionario foi de: %.2f R$\n",salarioInicial*percentualAumento/100);
    salarioFinal = salarioInicial + salarioInicial*percentualAumento/100;
    printf("O valor do salario final do funcionario eh de: %2.f R$",salarioFinal);


return 0;
}


