//Nome: Gabriel da Silva Vasconcelos
//Matricula: 473801
//GitHub Repository: https://github.com/gsv99/faculdade

#include <stdio.h>
#include <stdlib.h>

//fonte https://www.embarcados.com.br/bits-em-linguagem-c/
//fonte2 https://www.youtube.com/watch?v=SNJ21zJs3KM
//fonte3 http://www.diogomatheus.com.br/blog/php/operadores-bitwise-bit-a-bit/


int soma(int x, int y)
{
    int sobra;
    while (y)//enquanto o y não for 0 continuar
    {
        sobra = x & y; // Faz o AND bit a bit
        x ^= y; // Faz o XOR bit a bit de x cm y
        y = sobra << 1; // da um shift para esquerda no sobra
    }
    return x;
}

int subtracao(int x, int y)
{
    int comp2, result;

    comp2 = ~y; // Este operador ele nega todo o bit, por ex: 20 => Bin: 10100, ~20 = -21 => Bin: 01011 |lembrando do complemento de 2|
    result = soma(comp2, 1); // Por ficar o valor (%d negativo) -1, eu somei com +1
    result = soma(x,result); // Depois somei o valor da subtração
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