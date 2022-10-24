/*12. Escreva um programa que pe ̧ca ao usu ́ario para digitar dois n ́umeros, obtenha-os 
do usu ́ario e imprima
a soma, o produto, a diferen ̧ca, o quociente e o resto da divis ̃ao dos dois n ́umeros.*/

#include <stdio.h>
int main(){

    float a, b;
    printf("\nDigite o primeiro número: ");
    scanf("%f",&a);
    printf("\nDigite o segundo número: ");
    scanf("%f",&b);
    
    
    printf("\nSoma: %.1f \nProduto: %.1f \nDiferença: %.1f \nQuociente: %.1f ",a+b,a*b,a-b,a/b);
    






    

    return 0;
}
