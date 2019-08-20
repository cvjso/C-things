#include <stdio.h>


int main(){

	int matriz01[3][];
	int matriz02[3][];
	int matriz03[3][];
	int d = 0;
	int c = 0;

	printf("Digite os numeros da primeira matriz 3x3 ");
	scanf("%d",matriz01);

	printf("Digite os numeros da segunda matriz 3x3 ");
	scanf("%d",matriz02);

	for (d=0; d<3; d++){
	
		for(c=0;c<3;c++){
			matriz03[d][c] = matriz01[d][0]*matriz02[0][c] + 
matriz01[d][1]*matriz02[1][c] + matriz01[d][2]*matriz02[2][c];
		}
	
	}
	printf("A matriz resultante foi\n");
	printf("%d %d %d",matriz03[0][0],matriz03[0][1],matriz03[0][2]);
	printf("%d %d %d",matriz03[0][0],matriz03[1][1],matriz03[1][2]);
	printf("%d %d %d",matriz03[0][0],matriz03[2][1],matriz03[2][2]);

	return 0;
}
