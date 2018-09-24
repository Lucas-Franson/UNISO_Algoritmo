#include <Math.h>
#include <stdio.h>
#include <stdlib.h>

main(){
	int valor, quadrado, cubo, raiz;
	
	do{
		printf("Informe um valor: (0 para finalizar) \n");
		scanf("%d", &valor);
		if(valor == 0)
			break;
		quadrado = pow(valor, 2);
		cubo = pow(valor, 3);
		raiz = sqrt(valor);
		printf("\n%d quadrado = %d\n", valor, quadrado);
		printf("%d cubo = %d\n", valor, cubo);
		printf("Raiz quadrado %d = %d\n", valor, raiz);
	}while(valor != 0);
		printf("\nPrograma Finalizado...");
		
	system("PAUSE");
}
