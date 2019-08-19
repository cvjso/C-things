#include <stdio.h>


int main(){

	int matriz01[][];
	int matriz02[][];
	int matriz03[][];
	int a = 0;
	int b = 0;

	printf("Digite os numeros da primeira matriz 3x3 ");
	scanf("%d",matriz01);

	printf("Digite os numeros da segunda matriz 3x3 ");
	scanf("%d",matriz02);

	for (d=0; d<3; d++){
	
		for(c=0;c<3;c++){
			matriz03[d][c] = matriz01[a][0]*matriz02[0][b]+
				matriz01[a][1]*matriz02[1][b]+
				matriz01[a][2]*matriz02[2][b];
		
		
		
		}
	
	
	}






	return 0;
}
