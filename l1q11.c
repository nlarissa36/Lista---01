/*11. Elabore um programa que apresente o valor da convers ̃ao em d ́olar de um valor lido em real. O
programa deve solicitar o valor da cota ̧c ̃ao do d ́olar e tamb ́em a quantidade de reais que o usu ́ario
deseja converter.*/


#include <stdio.h>
#include <windows.h>
int main(){
    SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
    float cota, dolar, real;

    printf("\n*** Programa para converter Dólar em Real ***");
    printf("\nDigite o valor da Cotação: ");
    scanf("%f",&cota);
    printf("Digite o valor que deseja converter em reais: ");
    scanf("%f",&real);
    dolar = real/cota;
    printf("\nR$%.1f equivale a $%.1f",real,dolar);

    






    

    return 0;
}
