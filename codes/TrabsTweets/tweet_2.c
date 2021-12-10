#include "tw.h"

typedef struct no{
    char twe[280];
    struct no * prox;
    struct no * ant;
}NO;

NO *inicio = NULL;
NO *fim = NULL;
int tam = 0;

void adicionar(char twe[280], int pos){
    if(pos >= 0 && pos <= tam){
        
        NO *novo =(NO*) malloc (sizeof(NO));
        novo->twe[280] = twe[280];
        novo->prox = NULL;
        
        if(inicio == NULL){ //tam == 0 - lista vazia :D
            inicio = twe[280];
            fim = twe[280];
        }else if(pos == 0){ //no inicio da lista
            novo->prox = inicio;
            inicio = novo;
        }else if(pos == tam){// no fim da lista
            fim->prox = novo;
            fim = novo;
        }else{
            NO *aux = inicio;
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
    for(i=0; i<tam; i++){
        printf("%s\n", aux->twe);
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

/*NO* erase(NO* l, int v){

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
}*/