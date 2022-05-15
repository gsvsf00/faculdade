#include "func.h"

void q1()
{
    int algo;
    float valor, h, retorno;
    while(4){
        menu();
        scanf("%d", &algo);
        getchar();
        system("clear");
    switch (algo){
        case 1:
            printf("Digite o valor do raio: ");
            scanf("%f", &valor);
            getchar();
            retorno = CompCircu(valor);
            printf("\nComprimento da circunferência: %f", retorno);
            break;
        case 2:
            printf("Digite o valor do raio: ");
            scanf("%f", &valor);
            getchar();
            retorno = AreaCircu(valor);
            printf("\nÁrea da circunferência: %f", retorno);
            break;
        case 3:
            printf("Digite o valor do raio: ");
            scanf("%f", &valor);
            getchar();
            printf("\nDigite o valor da altura: ");
            scanf("%f", &h);
            getchar();
            retorno = CompCircu(valor)*h;
            printf("\nVolume do cilindro: %f", retorno);
            break;
        case 4:
            exit(4);
            break;
        default:
            printf("Errado\n");
            break;
        }
    }
}

void q2()
{
    float a, b, c, x1, x2, result;
    printf ("\n\n\nInforme o valor de A: ");
    scanf ("%f", &a);
    printf ("Informe o valor de B: ");
    scanf ("%f", &b);
    printf ("Informe o valor de C: ");
    scanf ("%f", &c); 
    result = delta(a,b,c);

    if(result<0)
        printf("Delta negativo: %2.f\n", result);
    else
    {
        printf("Delta: %f\n", result);
        x1=((-b)+sqrt(result))/(2*a);
        x2=((-b)-sqrt(result))/(2*a);
        printf ("\nO x1 = %f e o x2 = %f\n\n", x1, x2);
    }
    exit(0);
}

void q3()
{
    system("clear");
    float a,b,c,d,e,f,x,y;
    printf("ax+by=c\ndx+ey=f\n");

    printf("a:");
    scanf("%f", &a);
    printf("b:");
    scanf("%f", &b);
    printf("c:");
    scanf("%f", &c);
    printf("d:");
    scanf("%f", &d);
    printf("e:");
    scanf("%f", &e);
    printf("f:");
    scanf("%f", &f);
    printf("\n%2.fx + %2.fy = %2.f\n%2.fx + %2.fy = %2.f\n", a, b, c, d, e, f);
        
        y=(f*a-d*c)/(float)(a*e-d*b);
        x=(c-b*y)/(float)a;
        
    printf("\nx: %f\ny: %f\n", x, y);
    exit(0);
}

void q4()
{
    printf("Tamanho em BYTE\n");
    printf("Tamanho de char: %d \n", sizeof(char));
    printf("Tamanho de unsigned char: %d \n", sizeof(unsigned char));
    printf("Tamanho de signed char: %d \n", sizeof(signed char));
    printf("Tamanho de int: %d \n", sizeof(int));
    printf("Tamanho de unsigned int: %d \n", sizeof(unsigned int));
    printf("Tamanho de signed int: %d \n", sizeof(signed int));
    printf("Tamanho de short int: %d \n", sizeof(short int));
    printf("Tamanho de unsigned short int: %d \n", sizeof(unsigned short int));
    printf("Tamanho de signed short int: %d \n", sizeof(signed short int));
    printf("Tamanho de long int: %d \n", sizeof(long int));
    printf("Tamanho de signed long int: %d \n", sizeof(signed long int));
    printf("Tamanho de unsigned long int: %d \n", sizeof(unsigned long int));
    printf("Tamanho de float: %d \n", sizeof(float));
    printf("Tamanho de double: %d \n", sizeof(double));
    printf("Tamanho de long double: %d \n", sizeof(long double));
    
    exit(0);
}

void q5()
{
    int algo,aleat,novo=0,antigo=0,count=0;

    menu2();
    scanf("%d", &algo);
    getchar();
    system("clear");
    
    if(algo == 1 && count == 0)
    {
        novo = aleatorio();
        printf("[%d]\n", novo);
        antigo = novo+1;
        count++;
        algo = 0;
    }
    if(algo==1 && count!=0)
        printf("%d\n", antigo);
    if(algo==2)
        count=0;
    if(algo==3)
        exit(3);

}

void q6()
{
    char a,b;
    printf("Digite uma letra: \n");
    scanf("%c",&a);
    getchar();
    printf("Digite uma letra: \n");
    scanf("%c",&b);
    getchar();


    if(a<b)
        printf("'%c' vem antes de '%c'\n", a,b);
    if(a>b)
        printf("'%c' vem depois de '%s'\n", b,a);
    if(a==b)
        printf("'%s' são iguais '%s'\n", a,b);
    exit(0);
}

void q9()
{
    char s[20];
    scanf("%s",&s);
    getchar();
    printf("%s", reverte(s));
    exit(0);
}
void q10()
{
    int x,y;
    printf("Digite x: \n");
    scanf("%d",&x);
    printf("Digite y: \n");
    scanf("%d",&y);
    tabuleiro(x,y);
    exit(0);
}

void q11()
{
    int x;
    printf("Digite um valor: \n");
    scanf("%d",&x);
    desenho(x);
    exit(0);
}

void q13()
{
    int num,teste;
    printf("Digite um número: ");
    scanf("%d", &num);
    teste = primo(num);
    if(teste==num)
        printf("%d é um número primo\n", num);
    else
        printf("%d não é um número primo\n", num);
    exit(0);
}

void q14()
{
    int n, resultado;
    printf("Digite um número N: \n");
    scanf("%d", &n);
    resultado = perfeito(n);
    if (resultado == n)
        printf("Numero perfeito\n");
    else printf("Não é perfeito\n");

    exit(0);
}

void q15()
{
    long long valor_binario;
    printf("Digite numero binario: ");
    scanf("%lld", &valor_binario);
    printf("[%lld] em binario = [%d] em decimal\n", valor_binario, converterBin2Dec(valor_binario));
}