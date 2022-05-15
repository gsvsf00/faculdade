#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no{
    int qndtweet;
    int count;
    char **twe;

    struct no * prox;
}NO;

typedef struct trd{
    int top;
    char *token;

    struct trd * up;
    struct trd * down; 
}TRD;

void criartweet(int qntd, char *str);
void addbloco(int qntd);
void addtrending(char *hash);
void imprimir();
void imprimirTrending();
void reodenar();
void searchhash();

//void digite();
void trendings();

void tweet_file();