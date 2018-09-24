#include <Math.h>
#include <stdio.h>
#include <stdlib.h>

main(){
	int num, cont;
	
	printf("Informe um numero: (inteiro)\n");
	scanf("%d", &num);
	
	cont = num;
	do{
		if(num == 2 || num == 3 || num == 5 || num == 7){
			printf("E primo!\n");
			break;
		}
		if(num % 2 == 0){
			printf("Nao e primo!\n");
			break;
		} else if(num % 5 == 0){
			printf("Nao e primo!\n");
			break;
		} else if(num % 3 == 0){
			printf("Nao e primo!\n");
			break;
		} else if(num % 7 == 0){
			printf("Nao e primo!\n");
			break;
		} else
		{
			printf("E primo!\n");
			break;
		}
	}while(cont > 0);
		
	system("PAUSE");
}
