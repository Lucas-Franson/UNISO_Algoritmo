#include <stdlib.h>
#include <stdio.h>
#include <Math.h>

main(){
	
	float valor, valorPrestacao;
	int c;
	
	printf("########################################\n");
	printf("#          LOJA MAMAO COM ACUCAR       #\n");
	printf("########################################\n");
	
	printf("\n Valor do produto:");
	scanf("%f", &valor);
	
	for(c = 1; c <= 5; c++){
		valorPrestacao = valor / c;
		printf("\n%dx : %f\n", c, valorPrestacao);
	}
	
	system("PAUSE");
}
