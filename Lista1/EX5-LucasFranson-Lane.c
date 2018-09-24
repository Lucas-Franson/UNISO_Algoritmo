#include <stdio.h>
#include <stdlib.h>

int main()
{
	float nota1, nota2,nota3,media_nota;
	char nome[10];
	
  printf("Digite o nome do Aluno:\n");
    scanf("%s",&nome);  	
  printf("Digite a primeira nota:\n");
    scanf("%f",&nota1);
  printf("Digite a segunda nota:\n");
    scanf("%f",&nota2);  
  printf("Digite a terceira nota:\n");
    scanf("%f",&nota3);

  media_nota= ((nota1+nota2+nota3)/3) ;
 
  printf("A media do %s e %.2f \n",nome, media_nota); 
  system("pause");
  return 0;
}

