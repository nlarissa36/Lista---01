/*17. Escrever um programa que receba um valor inteiro do usu ́ario e 
apresente o seu valor absoluto (m ́odulo).
N ̃ao utilize estrutura de decis ̃ao if.*/

#include <stdio.h>
int main(){

    int x;
    printf("\nDigite um valor inteiro: ");
    scanf("%d",&x);
        
    printf("%s",(x > 0 ? "O numero digitado é positivo" : "O numero digitado e negativo"));
    if(x>0){
        printf("\nValor absoluto: %d",x);
    }else{
        x=x*(-1);
        printf("\nValor absoluto: %d ",x);

    }
    






    

    return 0;
}
