#include <stdio.h>
#include <stdlib.h>
char sexo;
float alt;

float pesoIdeal(float altura, char sx){
	float pesoIdeal = 0;
	if(sx == 'M'){
		pesoIdeal = (72.7 * altura) - 58;
	}else if(sx == 'F'){
		pesoIdeal = (62.1 * altura) - 44.7;
	}
	return pesoIdeal;
}

void formulario(){
	printf("Informe o sexo:");
	scanf("%c", &sexo);
	printf("Informe a altura:");
	scanf("%f", &alt);
}

main(){
	formulario();
	printf("Peso ideal %.2f", pesoIdeal(alt, sexo));
	
	return 0;
}
