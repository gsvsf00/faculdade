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
    float a,b,c,d,e,f,x,y,result[2];
    int i = 0;
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
    do
    {
        result[i] = sistema(a,b,c,d,e,f);
        i++;
    }while (i!=2);
    printf("\nx: %f\ny: %f\n",result[0], result[1]);
    exit(0);
}