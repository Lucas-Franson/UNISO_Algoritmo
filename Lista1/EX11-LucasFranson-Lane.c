#include <stdlib.h>
#include <stdio.h>
#include <Math.h>

main(){
	float porcentagem, valorCusto, valorLiquido;
	
	printf("Informe valor de custo do produto: ");
	scanf("%f", &valorCusto);
	printf("Informe a porcentagem de acrescimo: ");
	scanf("%f", &porcentagem);
	
	valorLiquido = ((valorCusto / 100) * porcentagem) + valorCusto;
	
	printf("Valor Liquido: R$ %f\n", valorLiquido);
	
	system("PAUSE");
}
