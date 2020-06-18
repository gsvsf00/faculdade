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
	printf("\nb- Digite um ńumero inteiro n>0 e o programa mostra os divisores de n.\n");
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

		break;
    
    case 'd':

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