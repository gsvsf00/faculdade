#include "form.h"
#include <stdio.h>
#include <stdlib.h>


int main() {
	char op;
	float a,b,c;
	do {
		system("clear");
		printf("\n\ncalculadora\n\n");
		printf("\nEscolha uma opcao: ");
		printf("\na- Somar\nb-Subtrair\nc-Multiplicar\nd-Dividir\ne-Sair\n");
		scanf ("%[^\n]s", &op);
		switch (op) {
		
		case 'a':
		    printf("Primeiro valor: ");
		    scanf("%f",&a);
		    printf("Segundo valor: ");
		    scanf("%f",&b);
		    c = somar(a,b);
			getchar();
		    printf("Soma: [%.2f]", c);
			break;
		
		case 'b':
		    printf("Primeiro valor: ");
		    scanf("%f",&a);
		    printf("Segundo valor: ");
		    scanf("%f",&b);
		    c = menos(a,b);
			getchar();
		    printf("Subtrair: [%.2f]", c);
			break;
		
		case 'c':
		    printf("Primeiro valor: ");
		    scanf("%f",&a);
		    printf("Segundo valor: ");
		    scanf("%f",&b);
		    c = multi(a,b);
			getchar();
		    printf("Multiplicar: [%.2f]", c);
			break;
		
		case 'd':
		    printf("Primeiro valor: ");
		    scanf("%f",&a);
		    printf("Segundo valor: ");
		    scanf("%f",&b);
		    c = divid(a,b);
			getchar();
		    printf("Dividir: [%.2f]", c);
			break;
		case 'e': 
		    system("exit");
			break;

		default: printf("\n\nOpcao invalida\n");
			getchar();
			break;
		}
	} while (op != 'e');
	return 0;
}