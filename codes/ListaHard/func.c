#include "func.h"

void a1(int x)
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
    for(int i = 1; i <= x; i++){
        if(x%i==0)
            printf("[%d]", i);
    }
    printf("\n");
}

void c2(int x)
{
    int a = 0, i = 1;
    for(i; i < x; i++){
        if(x%i==0){
            printf("[%d]", i);
            a+=i;
        }
    }
    if(a==x)
        printf("\n[%d] é numero perfeito.\n", x);
    else printf("\n[%d] não é numero perfeito.\n", x);
}

void d2(int x)
{
    int i = 1, count = 0;
    do
    {
        if(x%i==0){
            count++;
        }
        i++;
    } while (i<=x);

    if(count <= 2){
        printf("%d é primo.\n", x);
        }
    else {
        printf("%d não é primo.\n", x);
    }
}

void a3(int x, int y)
{
    
    int num = 0, num2 = 0, i = x;
    for(x; x <= y; x++){
        if(x%2==0)
        {
            printf("[%d]", x);
            num += x;
            if(x > x-1)
                printf(",");
        }
        else 
        {
            num2 += x;
        }
    }
    printf("\nSoma Par: [%d]",num);
    printf("\nSoma Impar: [%d]",num2);
    printf("\n");
}

void b3( int x, int y)
{
int a, i, j;
    for(j = x; j<=y; j++){
        a = 0, i = 1;
        for(i; i < j; i++){
            if(j%i==0){
                printf("[%d]", i);
                a+=i;
            }
        }
        if(a==j)
            printf("\n[%d] é numero perfeito.\n", j);
        else printf("\n[%d] não é numero perfeito.\n", j);
    }
}

void c3(int x, int y)
{
    int i,j,divisor,aux=0;
    for(i = x ; i< y; i++){
        divisor=0;
        for(j=1;j<=i;j++){
            if(i%j==0)
            {
                divisor++;
            }

        }
        if(divisor==2)
            {
                aux=aux+i;
            }
    }
    printf("\nA soma dos primos é: [%d]\n", aux);
}

int qtprimo(int num)
{
    int resultado = 0;
    for (int j = 2; j <= num / 2; j++) {
            if (num % j == 0){
            resultado++;
            break;
            }
        }
    if (resultado == 0 && num != 0 && num != 1){
        return num;
    }
    
    return 0;
}

void q4primo(int x){
    for(int i=3; i<=x; i++){
        if((qtprimo(i) == i) && (qtprimo(i-2) == i-2)){
            printf("\nPrimos Gemêos:");
            printf("[%d,%d]", i-2, i);
        }
    }
    printf("\n");
}

int a5(int n){
    int k;
    float h = 0;
    for (k = 1; k<=n; k++)
        h = h + 1.0/k;
    printf("%0.5f\n", h);
    return 0;   
}

int a6(int n){
    int k;
    float h = 0;
    for (k = 1; k<=n; k++){
        h = h + (float)k/(n-k+1);
    }
    printf("%0.5f\n", h);
    return 0;   
}

int a7(int n){
    if(n%2 == 0){
        n*=-1;
    }
    return 1/n + a7(n-1);
}
