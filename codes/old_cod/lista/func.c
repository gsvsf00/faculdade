#include "func.h"

#define PI 3.14159265359
//1 questao
float CompCircu(float raio){
    return 2*PI * raio;
}
float AreaCircu(float raio){
    return PI*raio*raio;
}

void menu(){
    printf("\n==================\n");
    printf("1- Comprimento da circunferência\n");
    printf("2- Área da circunferência\n");
    printf("3- Volume do cilindro\n");
    printf("4- Sair\n");
    printf("==================\n");
}

//2 questao
float delta(float a, float b, float c)
{
    float delta = (b*b)-4*a*c;
    return (float)delta;
}

//3 questao
//Quero ajuda com retorno de 2 valores float

/*float sistema(float a, float b, float c, float d, float e, float f)
{
    float resultado[2];
    resultado[0]=(f*a-d*c)/(float)(a*e-d*b);
    resultado[1]=(c-b*resultado[0])/(float)a;
    for(int i = 0;i<2;i++)
    return (float)resultado;
}*/

//4 questao

//5 questao
void menu2(){
    printf("\n==================\n");
    printf("Não conseguie fazer: \n");
    printf("1- Gerar número pseudo-alatório: \n");
    printf("2- Zerar:\n");
    printf("3- Sair\n");
    printf("==================\n");
}

int aleatorio()
{
    int aleat = rand()%10;
        return aleat;
}

//6 questao

//9 questao
//Ja tinha feito semestre passado porém tava com erro e nunca ajeitei
char reverte(char s[])
{   
    int tamanho=0,i;
    while(*s != '\0')
    {
    tamanho++;
    }
    printf("Contador: %d\n", tamanho);
   

   char reverte_string[tamanho];

   for(i=0; i<tamanho; i++)
   {
      reverte_string[i] = s[(tamanho - i) - 1];
   }

   return reverte_string[tamanho];
}

//10 questao
//feito em sala, dei um commit no cod pro git
void tabuleiro(int x, int y)
{
	int h, v;
	if (!(x>=1 && x<=8 && y >=1 && y<=8)){
		printf("Posição Invalida\n");
		return;
	}	

	for(h =1; h <=8; h++){
		if(h == x) continue;
		printf("[%d,%d]\n", h, y);
	}
	for(v =1; v <=8; v++){
		if(v == y) continue;
		printf("[%d,%d]\n", x, v);
	}
}
//11 questao

int desenho(int base)
{
    int i, j,a,b;
    for (i = 1; i <= base; i = i + 1)
    {
        for (j = 1; j <= i; j = j + 1) putchar('*');
            putchar('\n');
    }
    
    for (a = 1; a <= base; a++)
    {
        for (b = 1; b <= a; b++) putchar('*');
            putchar('\n');
    }

    return 0;
}


//13 questao
//Ja tinha feito semestre passado adsshhas
int primo(int num)
{
    int i, resultado = 0;
    for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
       resultado++;
       break;
    }
 }
 
 if (resultado == 0)
    return num;
 else
    return 0;
}
//14 questao
int perfeito(int n)
{    
    if(soma_divisores(n)==n)
        return n;
    else return 0;
}
int soma_divisores(int n)
{
    int divisor, soma = 0;
    for(divisor=1;divisor <= n/2;divisor++)
        if(n%divisor==0)
            soma=soma+divisor;
    return soma;
}

//15 questao
//Ja tinha feito semestre passado adsshhas
int converterBin2Dec(long long valor_binario)
{
int valor_decimal = 0, proximo = 0, resto;
//Enquanto existir valor no binário
while (valor_binario != 0)
{
//Pega o resto da divisão do valor binário por 10
resto = valor_binario % 10;
//Divide o valor binário por 10
valor_binario /= 10;
//Incrementa o valor decimal com o resto da divisão multiplicado por 2 elevado ao proximo
valor_decimal += resto * pow(2, proximo);
//Incrementa a sequencial
++proximo;
}
return valor_decimal;
}