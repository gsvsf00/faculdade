#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tabuleiro(int x, int y, int bx, int by, int px, int py){
	int h, v;
	if (!(x>=1 && x<=8 && y >=1 && y<=8)){
		printf("Posição Invalida\n");
		return;
	}	

	for(h=1; h <=8; h++){
		if(h == x && h == bx || h == x) 
			continue;
		if(h == bx)
			break;
		printf("[%d,%d]\n", h, y);
	}
	for(v=1; v<=8; v++){
		if(v == y && v == by || v == y) 
			continue;
		if(v == by)
			break;
		printf("[%d,%d]\n", x, v);
	}
}



int main(){
	int tx,ty,bx,by,px,py;
	printf("\nDigite Torre Branca x: ");
	scanf("%d", &tx);
	printf("\nDigite Torre Branca y: ");
	scanf("%d", &ty);
	printf("\nDigite Rei Brancox: ");
	scanf("%d", &bx);
	printf("\nDigite Rei Branco y: ");
	scanf("%d", &by);
	printf("\nDigite Rei Preto x: ");
	scanf("%d", &px);
	printf("\nDigite Rei Preto y: ");
	scanf("%d", &py);
	tabuleiro(tx,ty,bx,by,px,py);
	return 0;
}
