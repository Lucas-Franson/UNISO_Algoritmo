#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
float n1, n2, n3;
char calc;

float media(float nota1, float nota2, float nota3, char calculo){
    float media = 0;
    if(calculo == 'A'){
        media = (nota1 + nota2 + nota3) / 3;
    } else if(calculo == 'P'){
        media = (5*nota1 + 3*nota2 + 2*nota3) / 10;
    } else if(calculo == 'H'){
        media = 3 / (1/nota1) + (1/nota2) + (1/nota3);
    }else{
        printf("Valor invalido!");
        return 0;
    }
    return media;
}

void formulario(){
    printf("Informe as 3 notas e o tipo de calculo: ");
    scanf("%f %f %f %c", &n1, &n2, &n3, &calc);
}

main(){
    printf("\nCalculos:\n(A) Aritmetica\n(P) Ponderada\n(H) Harmonica\n");
    formulario();
    printf("Media %.2f", media(n1, n2, n3, calc));
}
