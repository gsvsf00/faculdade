#include "q1func.h"
#define PI 3.14159265359

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
