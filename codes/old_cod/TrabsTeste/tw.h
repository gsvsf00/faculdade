#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no{
    int qndtweet;
    
    struct no * prox;
    struct no * ant;
    char *twe[];
}NO;

void adicionar(int qntd);
void digite();
void imprimir();