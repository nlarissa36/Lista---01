/*18. Escreva um programa que leia o raio de um c ́ırculo e imprima seu diˆametro, 
o valor de sua circunferˆencia e sua  ́area. 
Use o valor de 3,14159 para ”pi”. Fa ̧ca cada um destes c ́alculos dentro da instru ̧c ̃oes (ou
instru ̧c ̃oes) printf e use o especificador de convers ̃ao %f.*/


#include <stdio.h>
int main(){

    float raio, pi=3.14;

    printf("\nInforme o valor do raio: ");
    scanf("%f",&raio);
    printf("\nO valor do raio e: %.2f",raio);
    printf("\nO valor do diametro e: %.2f",raio*2);
    printf("\nO valor da circunferencia e: %.2f",2*pi*raio);
    printf("\nO valor da area e: %.2f cm",pi*raio*raio);   
    






    

    return 0;
}
