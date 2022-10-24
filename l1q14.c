/*14. Escreva um programa que leia uma temperatura em graus Celsius e apresente 
convertida em graus Fahrenheit. A f ́ormula de vers ̃ao  ́e F = (9 * C + 160) / 5, sendo F 
a temperatura Fahrenheit e C a temperatura em Celsius.*/


#include <stdio.h>
int main(){

    float c, f;
    printf("\nDigite uma temperatura em graus celsius: ");
    scanf("%f",&c);
    f = (9 * c + 160) / 5;
    printf("\n%.1fC equivale a %.1fF  graus Fahrenheit",c,f);

    






    

    return 0;
}
