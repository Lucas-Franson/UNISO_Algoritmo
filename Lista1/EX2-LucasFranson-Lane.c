#include <stdio.h>
#include <stdlib.h>

int soma();
int subtracao();
int multiplicacao();
int divisao();

int main()
{
	int num1,num2,sum, sub, mult, div;
	char select[1];
	
  printf("Digite o primeiro numero:\n");
    scanf("%d", &num1);
  printf("Digite o segundo numero: \n");
    scanf("%d", &num2);  
  printf("escolha operador: \n");
    scanf(" %c",&select);
 
  switch (*select) 
  {
  	
	case '+':
		sum = soma(num1,num2);
		printf("A soma dos numeros e %i  \n",sum);
		break;
	case '-':
		sub = subtracao(num1,num2);
		printf("A subtracao dos numeros e %i \n", sub);
		break;
	case '*':
	    mult = multiplicacao(num1, num2);
	    printf ("A multiplicacao dos numeros e %i \n", mult);
	    break;
	case '/':
	    div = divisao (num1,num2);
		printf ("A divisao dos numeros e %i \n", div);	
		break;
	default:
	    printf  ("Operador Invalido!");	
  }
    

  system("pause");
  return 0;
}

int soma (int x,int y)
{
	return x+y;
}
int subtracao(int x,int y)
{
	return x-y;
  }  
int multiplicacao (int x, int y)
{
	return x * y;
  }  
int divisao (int x , int y)
{
	return x / y ;
}

