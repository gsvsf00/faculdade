#include "func.h"

void imprime(int x)
{
    int num = 0, num2 = 0;
    if(num < 0) printf("Insira um valor maior que 0. \n");
    for(int i = 0; i < x; i++){
        printf("[%d]", i);
            num += i;
            if(i < x-1)
                printf(",");
            
    }
    printf("\nSoma: [%d]",num);

    for(int j = 0; j < x; j++){
        if(j%2==0)
            num += j;
        else num2 += j;            
    }
    printf("\nSoma Par: [%d]",num);
    printf("\nSoma Impar: [%d]",num2);
    printf("\n");
}

void a2(int x, int y)
{
    if(x%y==0)
        printf("y é divisor de x.\n");
    else printf("y não é divisor de x.\n");
}

void b2(int x)
{
    for(int i = 0; i <= x; i++){
        if(x%i==0)
            printf("[%d]", i);
        //if(i < x-1)
                //printf(",");
    }
}

