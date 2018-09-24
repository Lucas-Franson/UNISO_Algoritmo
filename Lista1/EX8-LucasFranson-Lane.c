#include <stdio.h>
#include <stdlib.h>

double convreal();

int main()
{ 
double cot,dolar,conreal;
printf("Digite a cotacao do Dolar atual: \n");
 scanf(" %lf",&cot);
printf("Digite a quantidade de Dolares; \n");
 scanf(" %lf", &dolar);
 
conreal = dolar * cot;

printf("A convercao do dolar em real e: %.2lf", conreal);
 


  system("pause");
  return 0;
}


