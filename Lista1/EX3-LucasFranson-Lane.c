#include <stdio.h>
#include <stdlib.h>
int consumo_medio();

int main()
{
  int consumo_me,dist, consu;
  
  printf("Digite a distancia percorrida:\n");
    scanf("%i",&dist);
  printf("Digite o consumo de combustivel:\n");
    scanf("%i",&consu);
    
  consumo_me = consumo_medio (dist,consu);
  	
  printf("O consumo medio de combustivel e %i (Litros por Kilometros) \n" , consumo_me);
  

  system("pause");
  return 0;
}

int consumo_medio(int distancia , int combustivel_gast)
{
	return distancia / combustivel_gast;
}
