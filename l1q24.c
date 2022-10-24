/*24. Escreva um programa que calcule o produto entre um valor dado x por 2 elevado 
a um valor dado n. Obs.: Utilize operadores binarios.*/


#include <stdio.h>

int main() {
 int x, n, f ;
f = 1;
 
  
  puts("informe o valor de x: ");
  scanf("%d", &x);
  fflush(stdin);

  puts("informe o valor do expoente n:");
  scanf("%d", &n);
fflush(stdin);

  f = x * f << n;

  printf("O valor em f e de %d\n",f);

  return 0;
}