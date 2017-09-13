#include <stdio.h>

int main(){
    float precoFabrica = 0, lucroDist = 0, valorImposto = 0, precoFinal = 0;
    int percentualLucroDist = 0, percentualImposto = 0;

    printf("Digite o preco de fabrica do veiculo\n");
    scanf("%f",&precoFabrica);

    printf("Digite o percentual de lucro do distribuidor\n");
    scanf("%d",&percentualLucroDist);

   printf("Digite o percentual de impostos\n");
    scanf("%d",&percentualImposto);

    //Regra de 3 para realizar o cálculo do valor do lucro do distribuidor
    lucroDist = (precoFabrica * percentualLucroDist)/100;
    printf("O valor do lucro do distribuidor eh de: %.2f\n R$", lucroDist);
    //Regra de 3 para realizar o cálculo do valor dos impostos
     valorImposto = (precoFabrica * percentualImposto)/100;
    printf("O valor do lucro do distribuidor eh de: %.2f\n R$", valorImposto);
    //soma dos valores que representam o valor final do veículo
    precoFinal = precoFabrica+valorImposto+lucroDist;
    printf("O valor do lucro do distribuidor eh de: %.2f\n R$", precoFinal);

return 0;
}

