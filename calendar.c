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

	if(dataA.ano > dataB.ano){
		if (dataA.mes > dataB.mes){}
		if (dataA.mes = dataB.mes){}		
		if (dataA.mes < dataB.mes){}
	}
	if (dataA.ano = dataB.ano){}
	if (dataA.ano < dataB.ano){
		if (dataA.mes > dataB.mes){}
		if (dataA.mes = dataB.mes){}		
		if (dataA.mes < dataB.mes){}
	}




	return 0;
}
