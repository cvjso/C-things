#include <stdio.h>

struct dic{
	int chave;
	int prox;
	int valor[200];
};
int main(){

	int tam,n,i,tempo,j,loop,zap;

	printf("Quantas tabelas você deseja?\n");
	scanf("%d",&loop);
	for(zap=0;zap<loop;zap++){
		printf("Digite o tamanho da tabela\n");
		scanf("%d",&tam);
		struct dic matriz[tam];

		for(i=0;i<tam;i++){
			matriz[i].chave = i;
			matriz[i].prox = 0;
			for(j=0;j<200;j++){
				matriz[i].valor[j] = -1;
			}
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

		printf("---H A S H  T A B L E---\n");

		for(i=0;i<tam;i++){
			printf("\n%d ---------",matriz[i].chave);
			if(matriz[i].valor[0] == -1){
				printf("---> \\ ");
				if(i+1 == tam){
					printf("\n");
				}
			}
			else{
				for(j=0;matriz[i].valor[j]!=-1;j++){
					printf("---> %d",matriz[i].valor[j]);
					if(matriz[i].valor[j+1] == 1 && i+1 == tam){
						printf("\n");
					}
				}
			}
		}
	}
	return 0;
}
