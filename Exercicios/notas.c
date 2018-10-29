#include <stdio.h>
#include <stdlib.h>
int n1[10], n2[10];
int i, m1, m2, t1, t2;

void mediaGeral(int nota1[10], int nota2[10]){
	m1 = 0;
	m2 = 0;
	for(i = 1; i <= 10; i++){
		m1 += nota1[i] / 10;
		m2 += nota2[i] / 10;
		printf("\nteste 3\n");
	}
}

void acimaMedia(){
	t1 = 0;
	t2 = 0;
	for(i = 1; i <= 10; i++){
		if(n1[i] > m1){
			t1 += 1;
			printf("\nteste 1\n");
		}
		if(n2[i] > m2){
			t2 += 1;
			printf("\nteste 2\n");
		}
	}
}

main(){
	int c;
	for(c = 1; c <= 10; c++){
		printf("\nInforme as duas notas: \n");
		scanf("%d %d", &n1[c], &n2[c]);
	}
		
	mediaGeral(n1, n2);
	acimaMedia();
	
	printf("\nMedia da primeira prova: %d\n", m1);
	printf("Media da segunda prova: %d\n", m2);
	printf("Alunos que tiraram nota acima da media: (prova 1) \n%d\n", t1);
	printf("Alunos que tiraram nota acima da media: (prova 2) \n%d\n", t2);
	
	return 0;
}
