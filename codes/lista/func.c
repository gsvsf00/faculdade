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
