#include <stdio.h>

int main(){
    
    int sexo;
    float a, peso;
    

    printf("\n*** Programa para calcular o peso ideal ***");
    printf("\nInforme a sua altura em metros: ");
    scanf("%f",&a);
    printf("\nInforme seu sexo: 1. Homem  2. Mulher: ");
    scanf("%d",&sexo);
    if (sexo == 1){
        peso = 72.7 * a - 58;
        printf("\nSeu peso ideal é %.1fKg",peso);

    }else if(sexo == 2){
        peso = 62.1 * a - 44.7;
        printf("\nSeu peso ideal é %.1fKg",peso);

    }else 
    printf("\nOpçao invalida!");




    return 0;
}
