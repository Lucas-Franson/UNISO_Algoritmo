#include <Math.h>
#include <stdio.h>
#include <stdlib.h>

main(){
	int m, c, i;
	
	printf("Informe a quantidade de *: ");
	scanf("%d", &m);
	
	for(c = 1; c <= m; c++){
		for(i = 1; i <= c; i++){
			printf("*");
		}
		printf("\n");
	}
		
	system("PAUSE");
}
