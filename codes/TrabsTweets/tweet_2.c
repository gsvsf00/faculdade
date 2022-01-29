#include "tw.h"

//aqui bloco do tweets
NO *inicio = NULL;
NO *fim = NULL;
int tam = 0;
int count = 0;
char tweet[281];

//aqui vai o bloco do Trending Topic
TRD *teto = NULL;
TRD *chao = NULL;
int size = 0;

void addtweet(int qntd){
    if(qntd == 0){
        printf("Qntd == 0\n");
        return;
    }
    digite();
    
    if(tam == 0 || count == qntd){ // INICIALIZACAO DO BLOCO
        NO *novo =(NO*) malloc (sizeof(NO));
        
        novo->qndtweet = qntd;
        strcpy(novo->twe[1], tweet);
        novo->prox = NULL;
        novo->ant = NULL;
        
        if(inicio == NULL && fim == NULL){ //tam == 0 - lista vazia :D
            //printf("inicio == NULL\nfim == NULL\n");
            inicio = novo;
            fim = novo;
            tam++;
        }
                
        else if(inicio != NULL && fim != NULL){// no fim da lista
            fim->prox = novo;
            novo->ant = fim;
            fim = novo;
            tam++;
        }
        else{
            printf("insercao invalida! :/");
            
        }
        count = 0;
    }
    else if(count < qntd && tam != 0){ //Aqui add dentro do bloco que ja existe
        NO *aux = fim;
        //printf("Count: %d\n", count);
        strcpy(aux->twe[count+1], tweet);
        //printf("Tweet: %s\n", aux->twe[count]);

    }
    else
        printf("insercao invalida! :/");
    trendings();
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
}

void imprimir(){
    NO *aux = inicio;
    int i;
    printf("\n*--------------------Imprimindo--------------------*\n");
    if(inicio == NULL){
		printf("Vazio!!\n");
	}else{	
        //printf("Tam: %d\n", tam);
        //printf("Count: %d\n", count);
        //printf("Qntd: %d\n", aux->qndtweet);
          
		do{
            printf("\n");
            for(i=0; i < tam ; i++){
                for(int j=1; j <= aux->qndtweet; j++){
                    printf("Bloco[%d]\n        Tweet[%d]: %s \n", i, j, aux->twe[j]);
                    if(i == tam-1 && aux->qndtweet - j == count)
                        break;
                }
                aux = aux->prox;
            }
		} while(aux != NULL);
	}
    printf("*-------------------------------------------------*\n");
    free(aux);
}

void trendings(){
    NO *aux = inicio;
    if(inicio == NULL)
        return;
    do{
        for(int i=0; i < tam ; i++){ //Aqui é o for dos blocos
            for(int j = 1; j <= aux->qndtweet; j++){ //Aqui é o for dentro do bloco
                const char s[2] = " ";
                char *hash;
                char *ret;

                ret = strpbrk(aux->twe[j], s);
                if(ret) {
                    hash = strchr(aux->twe[j], '#');
                    hash = strtok(hash, s);
                    //printf("%s\n", hash);
                    addtrending(hash);
                }
                else
                    break;
                if(i == tam-1 && aux->qndtweet - j == count)
                    break;
            }
            aux = aux->prox;
        }
    } while(aux != NULL);
}

void addtrending(char *hash){
    TRD *new =(TRD*) malloc (sizeof(TRD));
    new->top = 1;
    new->token = hash;
    new->up = NULL;
    new->down = NULL;

    TRD *aux = teto;

    if(teto == NULL && chao == NULL){
        printf("Criou\n");
        teto = new;
        chao = new;
        size++;
    }
    else if(teto != NULL && chao != NULL){
        for(int i=0; i < size; i++){
            if(strcmp(aux->token, new->token) == 0){
                printf("Aqui chegou\n");
                new->top = aux->top +1;
                aux = aux->up;

                /*if(aux->down == NULL || aux->up == NULL)
                    break;
                else if(new->top > aux->top){
                    new->up = aux->up;
                    new->down = aux->up;
                    aux->up->down = new;
                    aux->up = new;
                    aux->down = aux->down;
                    if(aux->down != NULL)
                        aux->down->up = aux->up;
                    else
                        aux->down = NULL;
                
                }*/
                free(aux);
            }
            chao->down = new;
            new->up = chao;
            chao = new;
            size++;
            aux = aux->down;
        }
        
    }
    else
        printf("insercao invalida ocorrida ao adicionar trending! :/\n");
}

void imprimirTrending(){
    TRD *aux = teto;
    int pos=1;
    printf("\n*--------------------Trending Topics--------------------*\n");
    if(teto == NULL)
        printf("\n              Nenhuma Trending no momento \n");
    while(aux != NULL){
        printf("\n%d: %s - [%d]\n", pos, aux->token, aux->top);
        aux = aux->down;
        pos++;
    }
    printf("\n*--------------------------------------------------------*\n");
    free(aux);
}

/*void trendings(){
    NO *aux = inicio;
    if(inicio == NULL)
        return;
    do{
        for(int i=0; i < tam ; i++){ //Aqui é o for dos blocos
            for(int j = 1; j <= aux->qndtweet; j++){ //Aqui é o for dentro do bloco
                const char s[2] = " ";
                char *hash;
                hash = strchr(aux->twe[j], '#');
                hash = strtok(hash, s);
                printf( " %s\n", hash ); //linha que tem que por armazenagem
                if(i == tam-1 && aux->qndtweet - j == count)
                    break;
            }
            aux = aux->prox;
        }
    } while(aux != NULL);
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