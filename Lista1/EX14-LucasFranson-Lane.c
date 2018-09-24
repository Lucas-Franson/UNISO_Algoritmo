#include <stdlib.h>
#include <stdio.h>
#include <Math.h>

main(){
	int n1, n2;
	
	printf("Informe dois numeros distintos: ");
	scanf("%d %d", &n1, &n2);
	
	if(n1 > n2){
		printf("%d e maior que %d\n", n1, n2);
	} else{
		printf("%d e maior que %d\n", n2, n1);
	}
	
	system("PAUSE");
}
