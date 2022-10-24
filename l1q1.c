#include <stdio.h>
int main(){
    int i;
    float mes, valor, vt;
    printf("\nDigite a quantidade de meses: ");
    scanf("%f",&mes);
    printf("\nInforme o valor aplicado todo mês: R$");
    scanf("%f",&valor);
    for(i=1; i<=mes; i++){
        vt=valor + (valor * 0,01);
    }
    printf("\n valor total: %.2f",vt);
    /* int x;
    x = 7 + 3 * 6 / 2 - 1;
    printf("\nO valor de x é: %d",x);
    x = 2 % 2 + 2 * 2 - 2 / 2;
    printf("\nO valor de x agora é: %d",x);
    x = (3 * 9 * (3 + (9 * 3 / (3))));
    printf("\nO valor de x agora é: %d\n",x);*/

    return 0;
}
