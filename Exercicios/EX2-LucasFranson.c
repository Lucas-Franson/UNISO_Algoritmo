#include <Math.h>
#include <stdio.h>
#include <stdlib.h>

main(){
	int num;
	
	printf("Informe um numero: (inteiro e positivo) \n");
	scanf("%d", &num);
	
	do{
		if(num%2 == 0)
			num = num / 2;
		else if(num%3 == 0)
			num = num / 3;
		else if(num%4 == 0)
			num = num / 4;
		else if(num%5 == 0)
			num = num / 5;
		else
			num = num / num;
		printf("%d \n", num);
	}while(num != 1);
		
	system("PAUSE");
}
