#include <stdio.h>
#include <stdlib.h>
int n1[10], n2[10], mG1, mG2, acimaM1, acimaM2, i;

void formulario(int indice){
    printf("\nNota da prova 1: ");
    scanf("%d", &n1[indice]);
    printf("\nNota da prova 2: ");
    scanf("%d", &n2[indice]);
}

int mediaGeral(){
    int x = 0, y = 0;
    for(i = 0; i < 10; i++){
        x += n1[i];
        y += n2[i];
    }
    mG1 = x / 10;
    mG2 = y / 10;

    return 1;
}

int acimaMedia(){
    acimaM1 = 0;
    acimaM2 = 0;
    for(i = 0; i < 10; i++){
        if(n1[i] > mG1){
            acimaM1 += 1;
        }
        if(n2[i] > mG2){
            acimaM2 += 1;
        }
    }
    return 1;
}

main(){
    for(i = 0; i < 10; i++){
        formulario(i);
    }

    if(mediaGeral() == 1){
        printf("\nMedia da prova 1: %d", mG1);
        printf("\nMedia da prova 2: %d", mG2);
    }else{
        printf("\nNão foi possivel calcular media geral.");
        return 0;
    }

    if(acimaMedia() == 1){
        printf("\nAcima da media prova 1: %d", acimaM1);
        printf("\nAcima da media prova 2: %d", acimaM2);
    }else{
        printf("\nErro!");
        return 0;
    }

}
