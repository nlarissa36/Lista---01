/*21. Escreva um programa que leia dois inteiros e ent ̃ao determine e imprima se o primeiro  ́e m ́ultiplo do
segundo. Obs.: N ̃ao utilizar estrutura de decis ̃ao if.*/

#include <stdio.h>
int main(){

    int a,b, res;
    printf("\nDigite um numero inteiro: ");
    scanf("%d",&a);
    printf("\nDigite um numero inteiro: ");
    scanf("%d",&b);
    printf("%s",(a%b==0? "Os numeros sao multiplos" : "Os numeros nao sao multiplos")); 






    

    return 0;
}
