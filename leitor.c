#include <stdio.h>
#include <stdlib.h>

int main(){

	int numero = 0;
	char *ponteiro;

	ponteiro = malloc(sizeof(char*));

	FILE *arquivo;
	arquivo = fopen("texto.txt","r");

	while(fgets(ponteiro,50,arquivo)!=NULL){
		numero+=1;
		//printf("%s %d\n",ponteiro,numero);
	}

	printf("esse texto possui um total de %d linhas\n",numero);

	return 0;
}
