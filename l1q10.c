/*10. Escreva um programa que calcule e apresente o valor do volume de um caixa 
retangular utilizando a f ́ormula VOLUME = COMPRIMENTO * LARGURA * ALTURA. */

#include <stdio.h>
int main(){

    float vol, c, l ,a;
    printf("\n*** Programa para calcular o volume ***");
    printf("\nInforme o comprimento da caixa : ");
    scanf("%f",&c);
    printf("\nInforme a largura da caixa : ");
    scanf("%f",&l);
    printf("\nInforme o altura da caixa: ");
    scanf("%f",&a);
    vol = c*l*a;
    printf("\no volume da caixa é %.1fm³",vol);






    

    return 0;
}
