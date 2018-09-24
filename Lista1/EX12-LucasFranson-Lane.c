#include <stdlib.h>
#include <stdio.h>
#include <Math.h>

main(){
	float custoFabrica, imposto, valorFinal;
	
	printf("Informe valor de fabrica do carro: ");
	scanf("%f", &custoFabrica);
	
	imposto = ((custoFabrica / 100) * 45) + custoFabrica;
	valorFinal = ((imposto / 100) * 28) + imposto;
	
	printf("\nValor ao consumidor final: %f\n", valorFinal);
	
	system("PAUSE");
}
