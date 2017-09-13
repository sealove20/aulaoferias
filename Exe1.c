#include <stdio.h>

int main(){
    int pes = 0,polegadas = 12, jardas = 3, milhas = 1760;

    printf("Digite um valor em pes\n");
    scanf("%d",&pes);

    printf("Valor em pe = %d\n",pes);
    printf("Valor em polegada = %d\n",pes*polegadas);
    printf("Valor em jardas = %d\n",pes*jardas);
    printf("Valor em milhas = %d",(jardas*pes)*milhas);
return 0;
}
