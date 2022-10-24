/*7. Fa ̧ca um programa que leia uma quantidade de horas, 
minutos e segundos e imprima o total de segundos.*/

#include <stdio.h>
int main(){

    int horas, min, seg, tseg;

    printf("\n*** Programa para calcular a quantidade de segundos ***");
    printf("\nInforme a quantidade de horas: ");
    scanf("%d",&horas);
    printf("\nInforme a quantidade de minutos: ");
    scanf("%d",&min);
    printf("\nInforme a quantidade de segundos: ");
    scanf("%d",&seg);
    tseg = (horas * 3600) + (seg * 60) + seg;
    printf("\nTotal de segundos: %d",tseg);








    

    return 0;
}
