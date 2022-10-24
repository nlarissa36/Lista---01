/*16. Desenvolva um programa que calcule o salario liquido de um professor. 
Para elaborar o programa,  ́e necess ́ario possuir alguns dados, 
tais como o valor da hora aula,
 n ́umero de horas trabalhadas no mˆes e
percentual de desconto do INSS. 
Em primeiro lugar, deve-se estabelecer o seu sal ́ario bruto para fazer
o desconto e ter o valor do salario liquido. Obs.: o programa deve informar o salario bruto e salario
liquido do professor.*/


#include <stdio.h>
int main(){
    
    float v_ha, horas_t, sal_b, sal_l, des_inss, inss;
    printf("\nInforme o valor da hora aula: ");
    scanf("%f",&v_ha);
    getchar();
    printf("\nInforme a quantidade de horas trabalhadas: ");
    scanf("%f",&horas_t);
    getchar();
    printf("\nInforme o percentual de desconto do INSS: ");
    scanf("%f",&inss);
    getchar();
    sal_b = horas_t * v_ha;
    des_inss = inss/100;
    sal_l = sal_b - (sal_b* des_inss);
 
    printf("\nValor desconto inss: %.2f",des_inss*sal_b);

    printf("\nSalario Bruto: %.2f  \nSalario liquido: %.2f",sal_b,sal_l);






    

    return 0;
}
