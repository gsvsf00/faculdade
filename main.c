#include "form.h"
#include <stdio.h>
#include <stdlib.h>


int main() {
	char op;
	int a,b,c;
	do {
		system("clear");
		printf("\n\ncalculadora\n\n");
		printf("\nEscolha uma opcao: ");
		printf("\na- Somar\nb-Subtrair\nc-Multiplicar\nd-Dividir\ne-Sair\n");
		scanf ("%[^\n]s", &op);
		switch (op) {
		
		case 'a':
		    scanf("%d",&a);
		    scanf("%d",&b);
		    c = somar(a,b);
		    printf("Soma: [%d]", c);
		break;
		
		case 'b':
		    scanf("%d",&a);
		    scanf("%d",&b);
		    c = menos(a,b);
		    printf("Subtrair: [%d]", c);
		break;
		
		case 'c':
		    scanf("%d",&a);
		    scanf("%d",&b);
		    c = multi(a,b);
		    printf("Multiplicar: [%d]", c);
		break;
		
		case 'd':
		    scanf("%d",&a);
		    scanf("%d",&b);
		    c = divid(a,b);
		    printf("Dividir: [%d]", c);
		break;
		case 'e': 
		    system("exit");
		break;
		default: printf("\n\nOpcao invalida\n");
			break;
		}
	} while (op != 'e');
	return 0;
}
