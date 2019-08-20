#include <stdio.h>

int main(){

	int matriz[16];
	int x = 0;
	int y = 0;
	int w = 1;
	int z,l1,l2,l3,l4, alfa,blau;
	printf("[a]  [b]  [c]  [d]\n");
	printf("[e]  [f]  [g]  [h]\n");
	printf("[i]  [j]  [k]  [l]\n");
	printf("[m]  [n]  [o]  [p]\n");
	printf("Digite os numeros da matriz 4x4: \n");
	for (blau = 0; blau<16;blau++){
		scanf("%d",&matriz[blau]);
	}
	while(w = 1){
		if (x == 0 || x == 1 || x == 4 || x == 5){
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

		}
		if (x == 2 || x == 3 || x == 6 || x == 7){
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
		}
		if (x == 8 || x == 9 || x == 12 || x == 13){
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
		}
		if (x == 10 || x == 11 || x == 14 || x == 15){
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
					w = 0;
				}
				else{
					x+=1;
					y=0;
				}

			}
		}
	}


	printf("O maior trio foi %d, %d, %d fazendo um total de %d\n",l2,l3,l4,l1);
	return 0;
}
