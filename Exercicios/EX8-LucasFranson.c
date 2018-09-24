#include <Math.h>
#include <stdio.h>
#include <stdlib.h>

main(){
	float mChico = 1.50, mZe = 1.10;
	int years = 0;
	
	do{
		mZe += 0.03;
		mChico += 0.02;
		years += 1;
	}while(mZe < mChico);
	
	printf("Ze ser maior que Chico %d anos\n", years);
		
	system("PAUSE");
}
