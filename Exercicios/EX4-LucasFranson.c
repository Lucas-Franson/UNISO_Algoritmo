#include <Math.h>
#include <stdio.h>
#include <stdlib.h>

main(){
	int num, cont;
	cont = 0;
	num = 2;
	do{
		if(num == 2 || num == 3 || num == 5 || num == 7){
			printf("%d E primo!\n", num);
			cont ++;
		}
		if(num % 2 == 0){
		} else if(num % 5 == 0){
		} else if(num % 3 == 0){
		} else if(num % 7 == 0){
		} else
		{
			printf("%d E primo!\n", num);
			cont ++;
		}
		num ++;
	}while(cont < 20);
		
	system("PAUSE");
}
