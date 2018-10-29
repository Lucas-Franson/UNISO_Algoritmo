#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int hh[2], MM[2], ss[2];
int escolha;
int valida = 1;
int segundos = 0;
int horas = 0, minutos = 0, segundo = 0;

int validaHora(int hh[2],int MM[2],int ss[2]){
    if(hh[1] >= 0 && hh[1] <= 23 && hh[2] >= 0 && hh[2] <= 23){
        if(MM[1] >= 0 && MM[1] <= 59 && MM[2] >= 0 && MM[2] <= 59){
            if(ss[1] >= 00 && ss[1] <= 59 && ss[2] >= 00 && ss[2] <= 59){
                return 1;
            }else{
                printf("Erro: Informe os segundos corretamente!");
                return 0;
            }
        }else{
            printf("Erro: Informe os minutos corretamente!");
            return 0;
        }
    }else{
        printf("Erro: Informe o horario corretamente!");
        return 0;
    }
}

int calculaSegundo(int hh, int MM, int ss){
    int segundos = ss, i;
    for(i = 1; i <= MM; i++){
        segundos += 60;
    }
    for(i = 1; i <= hh; i++){
        segundos += 3600;
    }

    return segundos;
}

void converteSegundos(int seg){
	printf("\nTeste\n");
	
	while(seg >= 3600){
		seg -= 3600;
		horas += 1;
	}
	
	while(seg >= 60){
		seg -= 60;
		minutos+= 1;
	}
	
	
	segundo = seg;
}

main(){
    do{
        printf("\nInforme a primeira hora no formato (00 00 00):\n");
        scanf("%d %d %d", &hh[1], &MM[1], &ss[1]);
        printf("\nInforme a segunda hora no formato (00 00 00):\n");
        scanf("%d %d %d", &hh[2], &MM[2], &ss[2]);
    }while(validaHora(hh, MM, ss) == 0);

	
	int tryAgain;
	do{
	
    	tryAgain = 1;
    
        int againTry;
        do{
        	valida = 1;
            printf("\nEscolha o horario para calcular os segundos: \n(1) %d %d %d \n(2) %d %d %d\n", hh[1], MM[1], ss[1], hh[2], MM[2], hh[2]);
            scanf("%d", &escolha);
            switch(escolha){
                case 1:
                    printf("Horario em segundos %d s", calculaSegundo(hh[1], MM[1], ss[1]));
                    break;
                case 2:
                    printf("Horario em segundos %d s", calculaSegundo(hh[2], MM[2], ss[2]));
                    break;
                default:
                    printf("Erro: Informe um numero valido!");
                    valida = 0;
                    break;
            }
        }while(valida == 0);
    
	    printf("\nCalcular outro horário? (S/N)\n");
        scanf("%c", &againTry);
        scanf("%c", &againTry);
    
	    if(againTry == 'S')
            tryAgain = 0;
	
	}while(tryAgain == 0);
	
	int HrSg;
	char valida = 'N';
	do{
		printf("\nInforme os segundos: \n");
		scanf("%d", &HrSg);
		
		converteSegundos(HrSg);	
		printf("Resultado em horas %d:%d:%d", horas, minutos, segundo);
	
		
	}while(valida == 'S');
	
}
