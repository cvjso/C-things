#include <stdio.h>

int main(){

	int matriz[16];
	int x = 0;
	int y = 0;
	int z,l1,l2,l3,l4, alfa;
	printf("[a]  [b]  [c]  [d]\n");
	printf("[e]  [f]  [g]  [h]\n");
	printf("[i]  [j]  [k]  [l]\n");
	printf("[m]  [n]  [o]  [p]\n");
	printf("Digite os numeros da matriz 4x4: \n");
	scanf("%d",matriz);

	switch(x){

		case (0):
		case (1):
		case (4):
		case (5):

			if (y == 0){
				alfa = matriz[x] * matriz[x+1] * matriz[x+2];
				if (alfa > l1){
					l1 = alfa;
					l2 = x;
					l3 = x+1;
					l4 = x+2;			
				}
				y+=1;
			}
			if (y == 1){
				alfa = matriz[x] * matriz[x+5] * matriz[x+10];
				if (alfa > l1){
					l1 = alfa;
					l2 = x;
					l3 = x+5;
					l4 = x+10;
				}
				y+=1;
			}
			if (y == 2){
				alfa = matriz[x] * matriz[x+4] * matriz[x+8];
				if (alfa > l1){
					l1 = alfa;
					l2 = x;
					l3 = x+4;
					l4 = x+8;
				}
				x += 1;
				y = 0;
			}


		case (2):
		case (3):
		case (6):
		case (7):
			if (y == 0){
				alfa = matriz[x] * matriz[x-1] * matriz[x-2];
				if (alfa > l1){
					l1 = alfa;
					l2 = x;
					l3 = x-1;
					l4 = x-2;
				}
				y+=1;
			}
			if (y == 1){
				alfa = matriz[x] * matriz[x+3] * matriz[x+6];
				if (alfa > l1){
					l1 = alfa;
					l2 = x;
					l3 = x+3;
					l4 = x+6;
				}
				y+=1;
			}
			if (y == 2){
				alfa = matriz[x] * matriz[x+4] * matriz[x+8];
				if (alfa > l1){
					l1 = alfa;
					l2 = x;
					l3 = x+4;
					l4 = x+8;
				}
				x+=1;
				y=0;
			}
		case (8):
		case (9):
		case (12):
		case (13):
			if (y == 0){
				alfa = matriz[x] * matriz[x-4] * matriz[x-8];
				if (alfa > l1){
					l1 = alfa;
					l2 = x;
					l3 = x-4;
					l4 = x-8;
				}
				y+=1;
			}
			if (y == 1){
				alfa = matriz[x] * matriz[x-3] * matriz[x-6];
				if(alfa > l1){
					l1 = alfa;
					l2 = x;
					l3 = x-3;
					l4 = x-6;
				}
				y+=1;
			}
			if (y == 2){
				alfa = matriz[x] * matriz[x+1] * matriz[x+2];
				if (alfa > l1){
					l1 = alfa;
					l2 = x;
					l3 = x+1;
					l4 = x+2;
				}
				x+=1;
				y = 0;
			}
		case (10):
		case (11):
		case (14):
		case (15):
			if (y == 0){
				alfa = matriz[x] * matriz[x-4] * matriz[x-8];
				if (alfa > l1){
					l1 = alfa;
					l2 = x;
					l3 = x+1;
					l4 = x+2;
				}
				y+=1;
			}
			if (y == 1){
				alfa = matriz[x] * matriz[x-5] * matriz[x-10];
				if (alfa > l1){
					l1 = alfa;
					l2 = x;
					l3 = x+1;
					l4 = x+2;
				}
				y+=1;
			}
			if (y == 2){
				alfa = matriz[x] * matriz[x-1] * matriz[x-2];
				if (alfa > l1){
					l1 = alfa;
					l2 = x;
					l3 = x+1;
					l4 = x+2;
				}
				if(x == 15){
					break;
				}
				else{
					x+=1;
					y=0;
				}

			}
		default:
			printf("Não esperava por essa...\n");
	}


	printf("O maior trio foi %d, %d, %d fazendo um total de %d\n",l2,l3,l4,l1);

	return 0;
}
