#include <Math.h>
#include <stdio.h>
#include <stdlib.h>

main(){
	int num, cont;
	num = 92;
	do{
		if(num == 2 || num == 3 || num == 5 || num == 7)
			printf("Produto de %d = %d\n", num, (num*num));
		else if(num % 2 == 0){
		}
		else if(num % 5 == 0){
		}
		else if(num % 3 == 0){
		}
		else if(num % 7 == 0){
		}
		else
			printf("Produto de %d = %d\n", num, (num*num));
		num ++;
	}while(num < 1478);
		
	system("PAUSE");
}
