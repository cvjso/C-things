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
		soma = 0;
		for (b=10;b>-1;b--){
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
