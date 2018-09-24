#include <stdio.h>
#include <stdlib.h>

int main()
{
 float a , b, aux;
 
 printf("Digite o valor A:\n");
   scanf ("%f",&a); 
 printf("Digite o valor B:\n");
   scanf ("%f",&b); 
 aux = a;
 a = b;
 b = aux;
 
 printf("A inversao dos valores A,B e: A: %.2f e B: %.2f \n", a , b);
 
 
  system("pause");
  return 0;
}

