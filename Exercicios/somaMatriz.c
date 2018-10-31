#include <stdio.h>
#include <stdlib.h>
int m1[2][2], m2[2][2], i, c;
int s[2][2];

void formulario(int linha){
    printf("\nInforme os valores da matriz 1: [numero, numero]");
    scanf("%d %d", &m1[linha][0], &m1[linha][1]);
    printf("\nInforme os valores da matriz 2: [numero, numero]");
    scanf("%d %d", &m2[linha][0], &m2[linha][1]);
}

void somaMatriz(){
    for(i = 0; i < 2; i++){
        for(c = 0; c < 2; c++){
            s[i][c] = (m1[i][c] + m2[i][c]);
        }
    }
}

main(){
    for(i = 0; i < 2; i++){
        formulario(i);
    }

    somaMatriz();
    for(i = 0; i < 2; i++){
        for(c = 0; c < 2; c++){
            printf("%d ", s[i][c]);
        }
        printf("\n");
    }
}
