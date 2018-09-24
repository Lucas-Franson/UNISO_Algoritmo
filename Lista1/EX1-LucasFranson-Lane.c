#include <stdio.h>
#include <stdlib.h>

int soma (int y,int x);

int main()
{
  int soma_2,a, b;
  
  printf("Digite o primeiro numero: \n");
    scanf("%d", &a );
      printf("Digite o segundo numero: \n");
    scanf("%d",&b );
  soma_2= soma(a,b);
  printf("A soma dos numeros e %d \n ",soma_2); 
  
  system("pause");
  return 0;
}

int soma(int y ,int x)
{
	return y+x;
}

