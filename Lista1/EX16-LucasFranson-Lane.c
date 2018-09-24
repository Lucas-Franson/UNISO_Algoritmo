#include <stdlib.h>
#include <stdio.h>
#include <Math.h>

main(){
	char nome[20];
	float n1, n2, n3, m;
	
	printf("Informe o nome do aluno: ");
	scanf("%s", &nome);
	printf("\nInforme as 3 notas obtidas por este aluno: ");
	scanf("%f %f %f", &n1, &n2, &n3);
	
	m = (n1 + n2 + n3) / 3;
	
	if(m >= 7 && m <= 10){
		printf("%s teve Media Aprovado\n", nome);
	} else if(m <= 5 && m >=0){
		printf("%s teve Media Reprovado\n", nome);
	} else if(m > 5 && m < 7){
		printf("%s teve Media Recuperacao\n", nome);
	} else{
		printf("Valor indisponivel!\n");
	}
	
	system("PAUSE");
}
