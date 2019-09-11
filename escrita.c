#include <stdio.h>
#include <stdlib.h>

int main(){

	FILE *arquivo;
	arquivo = fopen("texto.txt","a");
	fprintf(arquivo,"\nCONTE DIREITO\nCONTE CERTO\nCONTE CORRETO");
	fclose(arquivo);



	return 0;
}
