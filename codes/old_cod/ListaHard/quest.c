#include "func.h"


void q1()
{
    int x;
    printf("Digite um valor maior que 0: ");
    scanf("%d", &x);
    a1(x);
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

void q3()
{
    char op;
	float a,b,c;
    int x, y;
    
	system("clear");
	printf("\n\n3q- Itens\n\n");

	printf("\nEscolha uma opcao: ");
    printf("\na- O programa retorna a soma dos numeros pares do intervalo [x, y].\nb- O programa retorna a soma dos numeros perfeitos do intervalo [x, y].\nc- O programa retorna a soma dos numeros primos do intervalo [x, y].\nd- Sair\n");
	scanf ("%[^\n]s", &op);

	switch (op) {
        case 'a':
	        printf("\nDigite dois números(INTEIROS) x e y (com x < y):\n");
            printf("Digite X: ");
            scanf("%d", &x);
            printf("\nDigite Y: ");
            scanf("%d", &y);
            printf("Intervalos [%d,%d]\n", x, y);
            if (x > y || x == y)
            {
                printf("Valor Incorreto");
                getchar();
                q3();
            }
            a3(x,y);
            break;
            
        case 'b':
        	printf("\nDigite dois números(INTEIROS) x e y (com x < y):\n");
            printf("Digite X: ");
            scanf("%d", &x);
            printf("\nDigite Y: ");
            scanf("%d", &y);
            printf("Intervalos [%d,%d]\n", x, y);
            if (x > y || x == y)
            {
                printf("Valor Incorreto");
                getchar();
                q3();
            }
            b3(x,y);
            break;
        
        case 'c':
	        printf("\nDigite dois números(INTEIROS) x e y (com x < y):\n");
            printf("Digite X: ");
            scanf("%d", &x);
            printf("\nDigite Y: ");
            scanf("%d", &y);
            printf("Intervalos [%d,%d]\n", x, y);
            if (x > y || x == y)
            {
                printf("Valor Incorreto");
                getchar();
                q3();
            }
            c3(x,y);
            break;
        
        case 'd': 
            system("exit");
            break;

        default: printf("\n\nOpcao invalida\n");
            getchar();
            break;
		}
    exit(0);
}

void q4()
{
    int x;
    printf("Digite um valor N: ");
    scanf("%d", &x);
    q4primo(x);
    exit(0);
}

void q5()
{
    int x;
    printf("Digite um valor maior que 0: ");
    scanf("%d", &x);
    if(x < 0){
        printf("X < 0\n");
        q5();
        }
    a5(x);
    exit(0);
}

void q6(){
    int x;
    printf("Digite um valor maior que 0: ");
    scanf("%d", &x);
    if(x < 0){
        printf("X < 0\n");
        q6();
        }
    a6(x);
    exit(0);
}

void q7(){
    int x;
    printf("Digite um valor maior que 0: ");
    scanf("%d", &x);
    if(x < 0){
        printf("X = 0\n");
        q7();
        }
    printf("%f", a7(x));
    exit(0);
}

void q8(){
    int x;
    printf("Digite um valor maior que 0: ");
    scanf("%d", &x);
    if(x<0){
        printf("X < 0\n");
        q8();
        }
    printf("%f\n", a8(x));
    exit(0);
}
void q9()
{
    char op;
	float a,b,c;
    int x, y;
    
	system("clear");
	printf("\n\n9q- Itens\n\n");

	printf("\nEscolha uma opcao: ");
    printf("\na- Digite um número inteiro n>= 0 e o programa retorna o fatorial de n que ´e n! = 1×2×3×...×n \nb- Digite dois números inteiros n e k (sendo que n ≥ k). O programa deve retonar o Número Binomial\nc- Binomio\nd- Sair\n");
	scanf ("%[^\n]s", &op);

	switch (op) {
        case 'a':
	        printf("Digite um valor maior que 0: ");
            scanf("%d", &x);
            if(x == 0){
                printf("X = 0\n");
                q9();
            }
            printf("Fatorial de %d!: %d\n", x, fat(x));
            exit(0);
            break;
            
        case 'b':
        	printf("\nDigite dois números(INTEIROS) n e k (com n > k):\n");
            printf("Digite n: ");
            scanf("%d", &x);
            printf("\nDigite k: ");
            scanf("%d", &y);
            printf("Intervalos [%d,%d]\n", x, y);
            if (x < y || x == y)
            {
                printf("Valor Incorreto");
                getchar();
                q9();
            }
            printf("Binominal: %d\n", binomio(x,y));
            break;

        case 'c': 
            printf("Digite um valor maior que 0: ");
            scanf("%d", &x);
            if(x == 0){
                printf("X = 0\n");
                q9();
            }
            pascal(x);
            exit(0);
            break;

        case 'd': 
            system("exit");
            break;

        default: printf("\n\nOpcao invalida\n");
            getchar();
            break;
		}
    exit(0);
}
//