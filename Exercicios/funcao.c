#include <stdio.h>
#include <stdlib.h>
int idFigura, tamQua, tamTriCat, tamTriHip, tamRetLar, tamRetAlt, result;

int quadrado(){
	result = 0;
	
	result = tamQua * tamQua;
	
	return result;	
}

int triangulo(){
	result = 0;
	
	result = (tamTriHip * tamTriCat)/2;
	
	return result;
}

int retangulo(){
	result = 0;
	
	result = tamRetLar * tamRetAlt;
	
	return result;
}

void program(){
	printf("Informe o numero da figura: \nQuadrado (1) \nTriangulo (2) \nRetangulo (3) \n");
	scanf("%d", &idFigura);
	switch(idFigura){
		case 1:
			printf("Informe um dos lados do quadrado:");
			scanf("%d", &tamQua);
			printf("Valor: %d", quadrado());
			break;
		case 2:
			printf("Informe dois lados do triangulo:");
			scanf("%d %d", &tamTriCat, &tamTriHip);
			printf("Valor: %d", triangulo());
			break;
		case 3:
			printf("Informe dois lados do retangulo:");
			scanf("%d %d", &tamRetLar, &tamRetAlt);
			printf("Valor: %d", retangulo());
			break;
		default:
			printf("Valor incorreto!");
			break;
	}
}

main(){
	char teste;
	
	do{
		printf("\nIniciar programa? (S/N)");
		scanf("%c", &teste);
		if(teste == 'S')
			program();
	}while(teste == 'S');

}
