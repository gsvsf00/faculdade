#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct produto{
    char nome[50];
    int qntd;
    int valorcompra;
    int valorvenda;

    struct produto * prox;
    struct produto * ant;
}Produto;

void menuscope();
int Administrador(int autent);
int FdCaixa(int autent);
void CadastrarProduto(char *nome, int valorcompra, int valorvenda, int qntd, int pos);
void ConsultaEstoque();
void AbrirCaixa();
int LogarConta(int aut);