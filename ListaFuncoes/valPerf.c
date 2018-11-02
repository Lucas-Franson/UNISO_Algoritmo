#include <stdio.h>
#include <stdlib.h>
int val, i, per = 0;

void formulario(){
	printf("Informe um valor:\n");
	scanf("%d", &val);
}

int valorPerfeito(int valor){
	for(i = 1; i < valor; i++){
		if(valor % i == 0){
			per += i;
		}
	}
	if(per == valor){
		return 1;
	}else{
		return 0;
	}
}

main(){
	formulario();
	if(valorPerfeito(val) == 1){
		printf("%d e um valor perfeito.", val);
	}else{
		printf("%d não e um valor perfeito.", val);
	}
	
	return 0;
}
