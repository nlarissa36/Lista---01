/*5. Escreva um programa que pegue o valor de uma conta de restaurante e imprima 
o valor total a ser pago, considerando que o restaurante cobra 10% de taxa para o gar ̧com.*/



#include <stdio.h>
int main(){

    float conta, total;
    printf("\nDigite o valor da conta: R$ ");
    scanf("%f",&conta);
    total = conta + (conta*0.1);
    printf("\nValor total a ser pago: R$%.2f",total);






    

    return 0;
}
