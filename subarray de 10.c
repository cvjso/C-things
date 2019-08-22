#include <stdio.h>

int main(){

	int i,a,b,c,soma;
	int maior = 0;
	int array[10];


	printf("Digite 10 números\n");
	for (i=0;i<10;i++){
		scanf("%d",&array[i]);
	}

	for (a=0;a<10;a++){
		for (b=9;b>=0;b--){
			soma = 0;
			for(c=a;c<b;c++){
				soma = soma+array[c];
				if(soma>maior){
					maior = soma;
				}
			}
		}
	}

	printf("A maior soma de subsequência %i \n",maior);
	return 0;
}
