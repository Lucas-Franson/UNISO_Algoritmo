#include <stdio.h>
#include <stdlib.h>
int num, i, divisor;

int divisores(int numero){
	divisor = 0;
	for(i = 1; i <= numero; i++){
		if(numero % i == 0){
			divisor += 1;
		}
	}
	return divisor;
}

void formulario(){
	printf("Informe um numero positivo:");
	scanf("%d", &num);
}

main(){
	do{
		formulario();
		if(num < 0)
			printf("\nInforme um numero positivo!\n");
	}while(num < 0);
	
	printf("Quantidade de divisores %d\n", divisores(num));
	
	return 0;
}
