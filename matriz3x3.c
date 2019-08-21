#include <stdio.h>


int main(){

	int matriz01[3][3];
	int matriz02[3][3];
	int matriz03[3][3];
	int d = 0;
	int c = 0;
	int i,b,m,n;
	printf("Digite os numeros da primeira matriz 3x3\n");
	for (i=0; i<3; i++){
		for(b=0; b<3; b++){
			scanf("%d",&matriz01[i][b]);
		}
	}
	printf("Digite os numeros da segunda matriz 3x3\n");
	for (int m=0; m<3; m++){
		for(int n=0; n<3; n++){
			scanf("%d",&matriz02[m][n]);
		}
	}

	for (d = 0; d<3; d++){
	
		for(c=0;c<3;c++){
			matriz03[d][c] = matriz01[d][0]*matriz02[0][c] + 
matriz01[d][1]*matriz02[1][c] + matriz01[d][2]*matriz02[2][c];
		}
	
	}
	printf("A matriz resultante foi\n");
	printf("%d %d %d\n",matriz03[0][0],matriz03[0][1],matriz03[0][2]);
	printf("%d %d %d\n",matriz03[0][0],matriz03[1][1],matriz03[1][2]);
	printf("%d %d %d\n",matriz03[0][0],matriz03[2][1],matriz03[2][2]);

	return 0;
}
