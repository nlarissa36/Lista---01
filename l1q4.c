/*4. Sabendo que os argumentos da fun ̧c ̃ao ”printf”podem ser express ̃oes (a+b, a/b, a*b...), 
e n ̃ao somente argumentos, fa ̧ca um programa capaz de ler um valor inteiro X e escrever 
seu triplo, seu quadrado, e seu meio.*/

#include <stdio.h>
int main(){

    int x;
    printf("\nDigite um número inteiro: ");
    scanf("%d",&x);
    printf("\nO número digitado foi: %d \nSeu triplo: %d \nSeu quadrado: %d \nSeu meio: %d",x,x*3,x*x,x/2);








    return 0;
}
