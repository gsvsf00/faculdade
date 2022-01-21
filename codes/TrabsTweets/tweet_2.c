#include "tw.h"

NO *inicio = NULL;
NO *fim = NULL;
int tam = 0;
int count = 0;
int contador = 0;
char tweet[281];

void adicionar(int qntd){
    if(qntd == 0){
        printf("Qntd == 0\n");
        return;
    }
    digite();
    
    if(tam == 0 || count == qntd){ // INICIALIZACAO DO BLOCO
        NO *novo =(NO*) malloc (sizeof(NO));
        
        novo->qndtweet = qntd;
        strcpy(novo->twe[0], tweet);
        novo->prox = NULL;
        novo->ant = NULL;
        
        if(inicio == NULL && fim == NULL){ //tam == 0 - lista vazia :D
            //printf("inicio == NULL\nfim == NULL\n");
            inicio = novo;
            fim = novo;
            tam++;
        }
        else if (count < qntd){
            fim->prox = novo;
            novo->ant = fim;
            fim = novo;
            tam++;
        }
        else if(count == qntd){// no fim da lista
            //printf("count == qntd\n");
            fim->prox = novo;
            novo->ant = fim;
            fim = novo;
            tam++;
        }
        else{// no fim
            printf("Else\n");
            fim->prox = novo;
            novo->ant = fim;
            fim = novo;
            tam++;
        }
        count = 0;
        contador = 0;
    }
    else if(count < qntd && tam != 0){ //Aqui add dentro do bloco que ja existe
        NO *aux = fim;
        //printf("AddCount: %d\n", count);
        strcpy(aux->twe[count], tweet);
        //free(aux);
    }
    count++;
}

//futuro digite
void digite(){
    int lent;
    printf("Tweet: ");
    fgets(tweet, sizeof tweet, stdin);
    lent = strlen(tweet);
    if (tweet[lent - 1] == '\n') {
    /* nome completo, com ENTER incluido */
        tweet[--lent] = 0; // apagar o ENTER
    } 
    else {
    /* ENTER e possivelmente outros caracteres ficaram no buffer */
    int ch;
    do 
        ch = getchar(); 
    while (ch != '\n'); // limpa caracteres extra
    }
    contador++;
}

void imprimir(int qntd){
    NO *aux = inicio;
    int i,j, size = 0;
    printf("\n*--------------------Imprimindo--------------------*\n");
    if(inicio == NULL){
		printf("Vazio!!\n");
	}else{
		
        printf("Tam: %d\n", tam);
        printf("Count: %d\n", count);
        printf("Qntd: %d\n", qntd);
        printf("Contador: %d\n", qntd);
		do{
            printf("\n");
            aux = inicio;
            for(i=0; i < tam ; i++){
                if(count < qntd){
                    for(j=0; j < qntd; j++)
                    printf("Bloco[%d]\n        Tweet[%d]: %s \n", i, j+1, aux->twe[j]);
                }
                else{
                    for(j=0; j < contador-1; j++){
                            printf("Bloco[%d]\n        Tweet[%d]: %s \n", i, j+1, aux->twe[j]);
                    }
                }
                aux = aux->prox;
            }
		} while(aux != NULL);
	}
    printf("*-------------------------------------------------*\n");
    free(aux);
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