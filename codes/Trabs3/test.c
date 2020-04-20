#include <stdio.h>
#include <stdlib.h>

#define bit __int8_t //aqui utiliza a palavra bit pra ser um int de 8 bits

int soma(bit x, bit y)
{
    bit sobra;
    while (y)
    {
        sobra = x & y; // Faz o AND bit por bit
        x ^= y; // Faz o XOR bit por bit
        y = sobra << 1;
    }
    return x;
}

int main()
{
    bit x, y, sobra, comp2, result;
    int count = 0;

    x = 30;
    y = 20;
    while (y)//enquanto o y não for 0 continuar
    {
        printf("x:%d y:%d sobra:%d\n", x, y, sobra);
        sobra = x & y; // Faz o AND bit a bit
        printf("x:%d y:%d sobra:%d\n", x, y, sobra);
        x ^= y; // Faz o XOR bit a bit de x cm y
        printf("x:%d y:%d sobra:%d\n", x, y, sobra);
        y = sobra << 1; // da um shift para esquerda no sobra
        printf("x:%d y:%d sobra:%d\n", x, y, sobra);
        printf("Termina\n");
        count++;
    }
    printf("%d %d %d\n", x, sobra, count);

    return 0;

}