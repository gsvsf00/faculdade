#include "lib.h"

Produto *inicio = NULL;
Produto *fim = NULL;
int tam = 0;


void CadastrarProduto(char *nome, int valorcompra, int valorvenda, int qntd, int pos){
    if(pos >= 0 && pos <= tam){
        
        Produto *novo =(Produto*) malloc (sizeof(Produto));
        novo->valorcompra = valorcompra;
        novo->valorvenda = valorvenda;
        novo->qntd = qntd;
        strcpy(novo->nome, nome);
        novo->prox = NULL;
        
        if(inicio == NULL){ //tam == 0 - lista vazia :D
            inicio = novo;
            fim = novo;
        }else if(pos == 0){ //no inicio da lista
            novo->prox = inicio;
            inicio = novo;
        }else if(pos == tam){// no fim da lista
            fim->prox = novo;
            fim = novo;
        }else{
            Produto *aux = inicio;
            int i;
            for(i=0; i< pos-1; i++){
                aux = aux->prox;
            }
            novo->prox = aux->prox;
            aux->prox = novo;
        }
        tam++;
    }
}

void ConsultaEstoque(){
    Produto *aux = inicio;
    int i;
    printf("Imprimindo a lista :D\n");
    for(i=0; i< tam; i++){
        printf("*-------------------------------------------------------------*\n");
        printf("Nome: %s \n", aux->nome);
        printf("Valor Compra: %d \n", aux->valorcompra);
        printf("Valor de Venda: %d \n", aux->valorvenda);
        printf("Quantidade no Estoque: %d \n", aux->qntd);
        aux = aux->prox;
    }
    getchar();
}