#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no{
    char twe[280];
    struct no * prox;
    struct no * ant;
}NO;

typedef struct bloco{
    NO *inicio;
    NO *fim;
    int tam;
}BLOCO;


void adicionar(BLOCO *p, char *twe);
void imprimir(BLOCO *p);
int remover(int pos);
BLOCO* inicializa(BLOCO *p);

extern int qnttwt;
extern int qqtwt;

void armazenameto();
int defsize();

void tweetar();
void digite();
void trendings();

void tweets();

void clear();