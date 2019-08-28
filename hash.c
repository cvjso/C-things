#include <stdio.h>

struct dic{
	int chave;
	int prox=0;
	int valor[200];
};
int main(){


	int tam,n,i,tempo;

	printf("Digite o tamanho da tabela\n");
	scanf("%d",&tam);
	struct dic matriz[tam];

	for(i=0;i<tam;i++){
		matriz[i].chave = i;
		matriz[i].valor[0] = -1;
	}


	printf("Digite quantos valores deseja alocar\n");
	scanf("%d",&n);

	printf("Digite os valores que serão alocados\n");
	for (i=0;i<n;i++){
		scanf("%d",&tempo);
		matriz[tempo%tam].chave = tempo%tam;
		matriz[tempo%tam].valor[matriz[tempo%tam].prox] = tempo;
		matriz[tempo%tam].prox+=1;
	}
	/* vai printar o numero de (prox +1) de valores */

	printf("---H A S H  T A B L E---\n");

	for(i=0;i<tam;i++){
		if(matriz[i].valor == -1){
			printf("%d ------------> / \n",matriz[i].chave);
		}
		else{
			for(j=0;j<matriz[].prox+1;j++){
				printf("%d ------------> %d \n",matriz[i].valor[j]);
			}
		}
	}

	return 0;
}
