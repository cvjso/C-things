#include <stdio.h>

int main(){

	int matriz[4][4];
	int a,b,c,l,i,j,posiA0,posiB0,posiA1,posiB1,posiA2,posiB2;
	int maior = 0;
	printf("Digite os numeros da matriz 4x4\n");
	for (i=0;i<4;i++){
		for(j=0;j<4;j++){
			scanf("%d",&matriz[i][j]);

		}
	}
	for (a=0;a<4;a++){
		for (b=0;b<4;b++){

			if (a == 0 || a == 1){
				if (b == 0 || b == 1){
					for (c=0;c<3;c++){
						if (c == 0){
							l = matriz[a][b]*matriz[a][b+1]*matriz[a][b+2];
							if (l>maior){
								maior = l;
								posiA0 = a;
								posiB0 = b;
								posiA1 = a;
								posiB1 = b+1;
								posiA2 = a;
								posiB2 = b+2;
							}
						}
						if (c == 1){
							l = matriz[a][b]*matriz[a+1][b+1]*matriz[a+2][b+2];
							if (l>maior){
								maior = l;
								posiA0 = a;
								posiB0 = b;
								posiA1 = a+1;
								posiB1 = b+1;
								posiA2 = a+2;
								posiB2 = b+2;
							}
						}
						if (c == 2){
							l = matriz[a][b]*matriz[a+1][b]*matriz[a+2][b];
							if (l>maior){
								maior = l;
								posiA0 = a;
								posiB0 = b;
								posiA1 = a+1;
								posiB1 = b;
								posiA2 = a+2;
								posiB2 = b;
							}
						}


					}

				}
				if (b == 2 || b == 3){
					for (c=0;c<3;c++){
						if (c == 0){
							l = matriz[a][b]*matriz[a][b-1]*matriz[a][b-2];
							if (l>maior){
								maior = l;
								posiA0 = a;
								posiB0 = b;
								posiA1 = a;
								posiB1 = b-1;
								posiA2 = a;
								posiB2 = b-2;
							}
						}
						if (c == 1){
							l = matriz[a][b]*matriz[a+1][b-1]*matriz[a+2][b-2];
							if (l>maior){
								maior = l;
								posiA0 = a;
								posiB0 = b;
								posiA1 = a+1;
								posiB1 = b-1;
								posiA2 = a+2;
								posiB2 = b-2;
							}
						}
						if (c == 2){
							l = matriz[a][b]*matriz[a+1][b]*matriz[a+2][b];
							if (l>maior){
								maior = l;
								posiA0 = a;
								posiB0 = b;
								posiA1 = a+1;
								posiB1 = b;
								posiA2 = a+2;
								posiB2 = b;
							}
						}

					}

				}
			}
			if (a == 2 || a == 3){
				if (b == 0 || b == 1){
					for (c=0;c<3;c++){
						if (c == 0){
							l = matriz[a][b]*matriz[a-1][b]*matriz[a-2][b];
							if (l>maior){
								maior = l;
								posiA0 = a;
								posiB0 = b;
								posiA1 = a-1;
								posiB1 = b;
								posiA2 = a-2;
								posiB2 = b;
							}
						}
						if (c == 1){
							l = matriz[a][b]*matriz[a-1][b+1]*matriz[a-2][b+2];
							if (l>maior){
								maior = l;
								posiA0 = a;
								posiB0 = b;
								posiA1 = a-1;
								posiB1 = b+1;
								posiA2 = a-2;
								posiB2 = b+2;
							}
						}
						if (c == 2){
							l = matriz[a][b]*matriz[a][b+1]*matriz[a][b+2];
							if (l>maior){
								maior = l;
								posiA0 = a;
								posiB0 = b;
								posiA1 = a;
								posiB1 = b+1;
								posiA2 = a;
								posiB2 = b+2;
							}
						}
					}
				}
				if (b == 2 || b == 3){
					for (c=0;c<3;c++){
						if (c == 0){
							l = matriz[a][b]*matriz[a][b-1]*matriz[a][b-2];
							if (l>maior){
								maior = l;
								posiA0 = a;
								posiB0 = b;
								posiA1 = a;
								posiB1 = b-1;
								posiA2 = a;
								posiB2 = b-2;
							}
						}
						if (c == 1){
							l = matriz[a][b]*matriz[a-1][b-1]*matriz[a-2][b-2];
							if (l>maior){
								maior = l;
								posiA0 = a;
								posiB0 = b;
								posiA1 = a-1;
								posiB1 = b-1;
								posiA2 = a-2;
								posiB2 = b-2;
							}
						}
						if (c == 2){
							l = matriz[a][b]*matriz[a-1][b]*matriz[a-2][b];
							if (l>maior){
								maior = l;
								posiA0 = a;
								posiB0 = b;
								posiA1 = a-1;
								posiB1 = b;
								posiA2 = a-2;
								posiB2 = b;
							}
						}
					}

				}

			}

		}






	}
	printf("O maior valor multiplicado é %i \n",maior);
	printf("Os valores estão em [%i][%i], [%i][%i] e [%i][%i] \n",posiA0,posiB0,posiA1,posiB1,posiA2,posiB2);

	return 0;
}
