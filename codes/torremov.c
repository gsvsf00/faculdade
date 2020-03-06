#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tabuleiro(int x, int y){
	int h, v;
	if (!(x>=1 && x<=8 && y >=1 && y<=8)){
		printf("Posição Invalida\n");
		return;
	}	

	for(h =1; h <=8; h++){
		if(h == x) continue;
		printf("[%d,%d]\n", h, y);
	}
	for(v =1; v <=8; v++){
		if(v == y) continue;
		printf("[%d,%d]\n", x, v);
	}
}



int main(){
	tabuleiro(1,3);
	return 0;
}
