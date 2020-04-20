#include <stdio.h>
#include <stdlib.h>

//fonte https://www.embarcados.com.br/bits-em-linguagem-c/
//fonte2 https://www.youtube.com/watch?v=SNJ21zJs3KM
//fonte3 http://www.diogomatheus.com.br/blog/php/operadores-bitwise-bit-a-bit/


int soma(int x, int y)
{
    int sobra;
    while (y)
    {
        sobra = x & y; // Faz o AND bit a bit
        x ^= y; // Faz o XOR bit a bit
        y = sobra << 1;
    }
    return x;
}

int subtracao(int x, int y)
{
    int comp2, result;

    comp2 = ~y;
    result = soma(comp2, 1);
    result = soma(x,result);
    return result;
}

int main(){
    int questoes,x, y, result;
    system("clear");

    printf("Digite 0 para sair:\n");
    printf("Digite o valor:\n");
    printf("1-Soma:\n");
    printf("2-Subtraçao\n");
    scanf("%d", &questoes);
    getchar();

    switch (questoes)
    {
    case 0:
        exit(0);
        break;
    case 1:
        system("clear");
        printf("[Valor 1] [Valor2]\n");
        scanf("%d %d", &x, &y);
        getchar();
        result = soma(x,y);
        printf("%d\n", result);
        break;

    case 2:
        system("clear");
        printf("[Valor 1] [Valor2]\n");
        scanf("%d %d", &x, &y);
        getchar();
        result = subtracao(x,y);
        printf("%d\n", result);
        break;
    default:
        break;
        }
    return 0;
}