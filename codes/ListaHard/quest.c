#include "func.h"


void q1()
{
    int x;
    printf("Digite um valor maior que 0: ");
    scanf("%d", &x);
    imprime(x);
    exit(0);
}

void q2()
{
    char op;
	float a,b,c;
	do {
		system("clear");
		printf("\n\n2q- Itens\n\n");
		printf("\nEscolha uma opcao: ");
		printf("\na- Digita dois numeros inteiro n>0 e m>0 e o programa mostra se n ́e divisor de m.\nb- Digite um ńumero inteiro n>0 e o programa mostra os divisores de n.\nc- Digite um número inteiro n>0 e o programa deveretornar se n ́e perfeito.\nd- Sair\n");
		scanf ("%[^\n]s", &op);
		switch (op) {
		
		case 'a':
            q1();
			break;
		
		case 'b':

			break;
		
		case 'c':

			break;
		
		case 'd': 
		    system("exit");
			break;

		default: printf("\n\nOpcao invalida\n");
			getchar();
			break;
		}
	} while (op != 'd');

    //int x;
    //printf("Digite um valor maior que 0: ");
    //scanf("%d", &x);
    //check(x);
    exit(0);
}