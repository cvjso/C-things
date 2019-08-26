#include <stdio.h>

int main(){

	struct data {

		int dia;
		int mes;
		int ano;

	}dataA,dataB;

	int h,i;
	int numerosA[2];
	char letrasA[3][15];
	int numerosB[2];
	char letrasB[3][15];
	char lista[] = {"janeiro","fevereiro","março","abril","maio","junho","julho","agosto","setembro","outubro","novembro","dezembro"}

	printf("Digite a primeira data ");
	for(i=0;i<5;i++){
		if(1<=i<=3){
			scanf("%s",letrasA[i-1]);
		}
		else{
			scanf("%d",numerosA[h]);
			h+=1;
		}
	}
	printf("Digite a segunda data ");
	h=0;
	for(i=0;i<5;i++){
		if(1<=i<=3){
			scanf("%s",letrasB[i-1]);
		}
		else{
			scanf("%d",numerosB[h]);
			h+=1;
		}
	}

	dataA.dia = numerosA[0];
	dataA.ano = numerosA[1];

	dataB.dia = numerosA[0];
	dataB.ano = numerosA[1];

	for (i=0;i<12;i++){
		if (lista[i]==letrasA[1]){
			dataA.mes = i+1;
		}
		if (lista[i]==letrasB[1]){
			dataB.mes = i+1;
		}
	}

	int resultadoDias = dataA.dia - dataB.dia;
	int resultadoMes = dataA.mes - dataB.mes;
	int resultadAno = dataA.ano - dataB.ano;


	if (dataA.dia > 30 || dataA.mes > 12 || dataA.ano<0 ||dataB.dia > 30 || dataB.mes > 12 || dataB.ano<0){
		printf("Digite uma data válida por favor");

	}


	if (dataA.ano > dataB.ano){
		if (dataA.mes > dataB.mes){
			if (dataA.dia < dataB.dia){
				resultadoDias =((dataA.mes - dataB.mes)*30+ dataA.dia )- dataB.dia;
				resultadoMes = 0;
				resultadAno = dataA.ano - dataB.ano;
			}
			else{
				resultadoDias = dataA.dia - dataB.dia;
				resultadoMes = dataA.mes - dataB.mes;
				resultadAno = dataA.ano - dataB.ano;
			}
		}
		if (dataA.mes == dataB.mes){
			if (dataA.dia < dataB.dia){
				resultadoDias =((dataA.ano - dataB.ano)*12*30+ dataA.dia )- dataB.dia;
				resultadoMes = 0;
				resultadAno = 0;
			}
			else{
				resultadoDias = dataA.dia - dataB.dia;
				resultadoMes = dataA.mes - dataB.mes;
				resultadAno = dataA.ano - dataB.ano;
			}
		}

	}


	return 0;
}
