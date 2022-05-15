#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void baralhar(int [][13]);
void dar(int [][13], char *[], char *[]);

int main(void){
    char *naipe[4] = {"Copas","Ouros","Paus","Espadas"};
    char *face[13] = {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
    int baralho[4][13] = {0};

    //system("color F1");//altera a cor de fundo e da fonte em hexadecimal

    printf("\t\t\t\t******************\n");//Imprime no monitor
    printf("\t\t\t\t$ BlackJack $\n");//Imprime no monitor
    printf("\t\t\t\t******************\n");//Imprime no monitor
    printf("\t\t\t\tDATA : %s \n",__DATE__);//Data
    printf("\t\t\t\tHORA: %s \n",__TIME__); //Hora
    printf("\t\t\tSeja Bem-Vindo ao Grande Black Jack \n");

    srand(time(NULL));
    //baralhar(baralho);
    //dar(baralho,face,naipe);
    return 0;
}