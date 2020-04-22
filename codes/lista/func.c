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
//13 questao
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