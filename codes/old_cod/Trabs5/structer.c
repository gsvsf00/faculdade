#include "lib.h"

typedef struct no{
    int valor;
    struct no * prox;
}NO;

NO *inicio = NULL;
NO *fim = NULL;
int tam = 0;



void adicionar(int valor, int pos){
    if(pos >= 0 && pos <= tam){
        
        NO *novo =(NO*) malloc (sizeof(NO));
        novo->valor = valor;
        novo->prox = NULL;
        
        if(inicio == NULL){ //tam == 0 - lista vazia :D
            p->inicio = novo;
            p->fim = novo;
        }else if(pos == 0){ //no inicio da lista
            novo->prox = p->inicio;
            p->inicio = novo;
        }else if(pos == tam){// no fim da lista
            p->fim->prox = novo;
            p->fim = novo;
        }else{
            NO *aux = p->inicio;
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


void imprimir(){
    NO *aux = inicio;
    int i;
    printf("Imprimindo a lista :D\n");
    for(i=0; i< tam; i++){
        printf("%d ", aux->valor);
        aux = aux->prox;
    }
}

int remover(int pos){
    if(pos >=0 && pos < tam){
        if(pos == 0){ //inicio
            NO* lixo = inicio;
            inicio = inicio->prox;
            free(lixo);
        }else if(pos == tam -1){ // FIM :O - CONSTANTE????? <3
            NO* aux = inicio;
            int i;
            for(i =0; i<tam -2; i++){
                aux = aux->prox;
            }
            NO* lixo = fim;
            aux->prox = NULL;
            fim = aux;
            free(lixo);
        }else{
            //:D :D :D :D sua vezzzzzzzzzzzzz
        }
    }    
}

NO* erase(NO* l, int v){

	NO* ant = NULL;
	NO* p = l;

	while(p != NULL && p->valor != v){
		ant = p;
		p = p->prox;
	}
	//verifica se achou elemento
	if(p==NULL){
		return 1;
	}
	//retira elemento//
	if(ant==NULL){
		//retira elemento no inicio
		l = p->prox;
	}
	else{
		//retira elemento no meio da lista
		ant->prox = p->prox;
	}
	free(p);
	return 1;
}