#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no{
    int qndtweet;
    struct no * prox;
    struct no * ant;
    char twe[][281];
}NO;

typedef struct trd{
    int top;
    struct trd * up;
    struct trd * down;
    char *token;
}TRD;

void addtweet(int qntd);
void addtrending(char *hash);
void imprimir();
void imprimirTrending();
int remover(int pos);
extern int qnttwt;
extern int qqtwt;

void teste();
void armazenameto();
int defsize();

void tweetar();
void digite();
void trendings();

void tweets();

void clear();