#include <stdio.h>
#include <stdlib.h>

int main()
{
	char nome[10];
	float  sal_base,vendas,comissao;
	
	
  printf("Digite o nome: \n");
    scanf("%s",&nome );
  printf("Digite o salario base: \n");
    scanf("%f",&sal_base);
  printf("Digite total do valor de vendas: \n ");
    scanf("%f",&vendas);
    
  comissao = 0.15 * vendas;
  
  printf ("O  salario final do %s e: R$ %.2f \n", nome , (sal_base+comissao));
  

  system("pause");
  return 0;
}

