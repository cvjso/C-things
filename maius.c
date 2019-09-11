#include <stdio.h>
#include <stdlib.h>

int main(){

	FILE *arquivo,*texto;
	arquivo = fopen("texto.txt","r");
	texto = fopen("temporario.txt","w");

	//Defini meus alfabetos
	char alpha[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','W','V','X','Y','Z'};
	char beta[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

	//Criei os ponteiros	
	char *ponteiro;
	char *patual;
	int n,j;
	ponteiro = malloc(sizeof(char*));

	//loop para pegar toda linha do meu texto.txt e colocar em temporario.txt
	while(fgets(ponteiro,80,arquivo)!=NULL){

		//loop para varrer cada item da minha palavra
		for(n=0;*(ponteiro+n)!='\0';n++){
			for(j=0;j<26;j++){

				//se for maiúscula então substituo ela por uma minúscula
				if(*(ponteiro+n) == alpha[j]){
					*(ponteiro+n) = beta[j];
				}
			}
		}
	//adicionando cada linha no meio texto temporario
	fprintf(texto,"%s",ponteiro);

	}

	fclose(arquivo);
	fclose(texto);

	arquivo = fopen("temporario.txt","r");
	texto = fopen("texto.txt","w");

	//varrendo cada linha de temporario.txt
	while(fgets(ponteiro,80,arquivo)!=NULL){

		//adicionando cada linha de temporario.txt em texto.txt
		fprintf(texto,"%s",ponteiro);
	}

	fclose(arquivo);
	fclose(texto);

	/*
	FILE *texto;
	texto = fopen("texto.txt","w");

	for(n=0;)

	*/

	return 0;
}
