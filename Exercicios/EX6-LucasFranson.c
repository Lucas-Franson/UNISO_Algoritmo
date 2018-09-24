#include <Math.h>
#include <stdio.h>
#include <stdlib.h>

main(){
	int num1, num2, m;
	
	do{
		printf("Informe um par de numeros: \n");
		scanf("%d %d", &num1, &num2);
		if(num1 == 0 && num2 == 0)
			break;
		m = (num1 + num2) /2;
		printf("Media: %d \n", m);
	}while(num1 != 0 && num2 != 0);
	printf("Finalizando...");
		
	system("PAUSE");
}
