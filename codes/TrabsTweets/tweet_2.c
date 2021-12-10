#include "tw.h"

void adicionar(BLOCO *p, char *twe){
    NO *novo =(NO*) malloc (sizeof(NO));
    strcpy(novo->twe, twe);
    novo->prox = NULL;
    if(p->tam == 0)
        printf("Teste\n");
    if(p->inicio == NULL){ //tam == 0 - lista vazia :D
        printf("Teste\n");
        p->inicio = novo;
        p->fim = novo;
    }else{// no fim
        printf("Teste\n");
        p->fim->prox = novo;
        p->fim = novo;
    }
    p->tam++;
}


/*void adicionar(char *twe, int pos){
    if(pos >= 0 && pos <= tam){
        
        NO *novo =(NO*) malloc (sizeof(NO));
        strcpy(novo->twe, twe);
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
}*/

void imprimir(BLOCO *p){
    NO *aux = p->inicio;
    int i;
    if(p->inicio == NULL){
		printf("\nFila Vazia!!");
	}else{
		aux = p->inicio;
		do{
			printf("%s \n", aux->twe);
			aux = aux->prox;
		} while(aux != NULL);
	}
}

/*int remover(int pos){
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
        	int i;
        	NO* aux = inicio;
            for(i=0; i<pos-1;i++){
            	aux=aux->prox;
            }
            NO* lixo = aux->prox;
            aux->prox= aux->prox->prox;
            free(lixo);
            //Já estou implementando a duplamente encadeada em códico :P
        }
    }    
}*/

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