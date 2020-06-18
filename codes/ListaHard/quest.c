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
    int x,y;
    
	system("clear");
	printf("\n\n2q- Itens\n\n");
	printf("\nEscolha uma opcao: ");
	printf("\na- Digita dois numeros inteiro n>0 e m>0 e o programa mostra se n ́e divisor de m.\nb- Digite um ńumero inteiro n>0 e o programa mostra os divisores de n.\nc- Digite um número inteiro n>0 e o programa deveretornar se n ́e perfeito.\nd- Digite um número inteiro n > 0 e o programa retorna se n ́e primo.\ne- Sair\n");
	scanf ("%[^\n]s", &op);
	switch (op) {
		
	case 'a':
            
        printf("x: ");
        scanf("%d", &x);
        printf("\ny: ");
        scanf("%d", &y);

        if(x > 0 && y > 0 )
        a2(x,y);
        else{
        printf("Valor Incorreto");
        getchar();
        q2();
        }
    	break;
		
	case 'b':
        printf("x: ");
        scanf("%d", &x);
        b2(x);
    	break;
	
	case 'c':
        printf("x: ");
        scanf("%d", &x);
        c2(x);
		break;
    
    case 'd':
        printf("x: ");
        scanf("%d", &x);
        d2(x);
		break;
	
	case 'e': 
	    system("exit");
		break;

	default: printf("\n\nOpcao invalida\n");
		getchar();
		break;
		}
    exit(0);
}