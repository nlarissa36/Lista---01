/*13. Escreva um programa que leia duas vari ́aveis A e B e efetue a troca dos valores.
 O objetivo  ́e que a vari ́avel A passe a conter o valor de B e a vari ́avel B passe a possuir 
 o valor de A. Apresente os valores ap ́os a efetiva ̧c ̃ao do processamento da troca.*/


#include <stdio.h>
int main(){
    int a, b, aux;
    printf("\nDigite o primeiro número: ");
    scanf("%d",&a);
    printf("\nDigite o segundo número: ");
    scanf("%d",&b);

    aux = a;
    a = b;
    b = aux;
    printf("\nOs valores digitados trocados ficam: %d e %d",a,b);

    






    

    return 0;
}
