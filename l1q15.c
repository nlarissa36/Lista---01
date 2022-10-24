/*15. Uma empresa contrata um vendedor a R$ 50,25 por dia. 
Crie um programa que solicite o n ́umero de dias trabalhados pelo vendedor 

e imprima o valor lıquido a ser pago ao mesmo, sabendo que se ele
trabalhou at ́e 10 dias n ̃ao tem direito `a gratifica ̧c ̃ao, 
se ele trabalhou acima de 10 dias e at ́e 20 dias tem direito `a gratifica ̧c ̃ao de 20%, 
se ele trabalhou  acima de 20 dias tem direito `a gratifica ̧c ̃ao de 30%.
Sempre sao descontados 10% de imposto de renda em cima do valor bruto.
valor bruto = sem desconto
valor liquido = com desconto - 10%   */


#include <stdio.h>
int main(){

    int diat;
    float dia=50.25, vl, vb, gratificacao, ir, sal, sal_liq;
    printf("\nDigite a quantidade de dias trabnalhados: ");
    scanf("%d",&diat);
    sal = diat * dia;
    if (diat<=10){
        gratificacao = 0;
        printf("\nNão tem direito a gratificacao!");
    }else if(diat<=20){
        gratificacao =  sal*0.2;
        printf("\nGratificação de 20%%");
    }else if (diat>20){
        gratificacao = sal*0.3;
        printf("\nGratificação de 30%%");
    }
    vb = sal + gratificacao;
    vl = vb - (vb*0.1);
    sal_liq = vl;
    printf("\nDias trabalhados: %d \nSalário: %.2f \nGratificação: %.2f \nValor Bruto: %.2f \nValor liquido: %.2f",diat,sal,gratificacao,vb,vl);
    

    






    

    return 0;
}
