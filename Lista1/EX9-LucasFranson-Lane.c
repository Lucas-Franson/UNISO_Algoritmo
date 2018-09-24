#include <stdlib.h>
#include <stdio.h>
#include <Math.h>

main(){
	float valor;
	printf("Informe um valor:");
	scanf("%f", &valor);
	
	valor = ((valor / 100)*0.70)+valor;
	
	printf("\nValor com juros: %f \n", valor);	
	
	system("PAUSE");
}
