#include <stdlib.h>
#include <stdio.h>
#include <Math.h>

main(){
	
	float num;
	
	printf("Informe um numero: ");
	scanf("%f", &num);
	
	if(num > 100 && num < 200){
		printf("Este numero esta no intervalo entre 100 e 200!\n");
	}
	
	system("PAUSE");
}
