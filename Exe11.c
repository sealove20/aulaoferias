#include <stdio.h>

int main(){
    float nota1 = 0, nota2 = 0, nota3 = 0, resultado = 0, peso1 = 0, peso2 = 0, peso3 = 0;

    printf("Digite o valor da nota 1\n");
    scanf("%f",&nota1);
    printf("Digite o peso da nota 1\n");
    scanf("%f",&peso1);

    printf("Digite o valor da nota 2\n");
    scanf("%f",&nota2);
    printf("Digite o peso da nota 2\n");
    scanf("%f",&peso2);

    printf("Digite o valor da nota 3\n");
    scanf("%f",&nota3);
    printf("Digite o peso da nota 3\n");
    scanf("%f",&peso3);

    resultado = ((nota1*peso1)/100+(nota2*peso2)/100+(nota3*peso3)/100)*10;
    printf("A media ponderada das notas eh de: %.2f",resultado);

return 0;
}
