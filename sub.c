#include <stdio.h>

int main(){
	int array[10];
	int h = 0;
	int i,y,w,z,q,copia;
	int soma = 0;
	int maior = 0;

	printf("Digite 10 numeros \n");
	for (i=0;i<10;i++){
		scanf("%d",&array[i]);
	}


	for (y=0;y<10;y++){
		soma = soma + array[y]; 
		if (soma>maior){
			maior = soma;
		}
	}
	soma = 0;
	for (w=10;w>0;w--){
		soma = soma+array[w];
		if (soma>maior){
			maior = soma;
		}
	}
	copia = soma;
	for (z=0;z<10;z++){
		if(z%2 == 1){
			soma = soma-array[10-z+h];
			if (soma>maior){
				maior = soma;
			}
			h+=1;
		}
		else{
			soma = soma-array[z/2];
			if(soma>maior){
				maior = soma;
			}

		}
	}
	soma = copia;
	h = 0;
	for (q=10;q>0;q--){
		if(q%2 == 1){
			soma = soma-array[10-q+h];
			if (soma>maior){
				maior = soma;
			}
			h+=1;
		}
		else{
			soma = soma-array[q/2];
			if(soma>maior){
				maior = soma;
			}

		}
	}
	printf("A maior subsequência é %i",maior);

	return 0;
}
