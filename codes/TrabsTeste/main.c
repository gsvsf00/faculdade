#include "tw.h"

NO *inicio = NULL;
NO *fim = NULL;
int tam = 0;
int count = 0;
char tweet[281];

void adicionar(int qntd){
    if(qntd == 0){
        printf("Qntd == 0\n");
        return;
    }
    digite();
    
    if(tam == 0 || count == qntd){ // INICIALIZACAO DO BLOCO
        NO *novo =(NO*) malloc (sizeof(NO));
        novo->twe[0] = (char *)malloc(281);
        
        novo->qndtweet = qntd;
        strcpy(novo->twe[0], tweet);
        printf("TweeTest: %s\n", novo->twe[0]);
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
        else{// no fim
            printf("insercao invalida! :/");
            
        }
        count = 0;
    }
    else if(count < qntd && tam != 0){ //Aqui add dentro do bloco que ja existe
        NO *aux = fim;
        aux->twe[count] = (char *)malloc(281);
        //printf("Count: %d\n", count);
        strcpy(aux->twe[count], tweet);
        //printf("Tweet: %s\n", aux->twe[count]);

    }
    else
        printf("insercao invalida! :/");
    count++;
}

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
		
        printf("Tam: %d\n", tam);
        printf("Count: %d\n", count);
        printf("Qntd: %d\n", aux->qndtweet);
        
        
		do{
            printf("\n");
            for(i=0; i < tam ; i++){
                for(int j=0; j < aux->qndtweet; j++){
                    printf("Bloco[%d]\n        Tweet[%d]: %s \n",i+1, j, aux->twe[j]);
                    //if(i == tam-1 && aux->qndtweet - j == count)
                       // break;
                }
                aux = aux->prox;
            }
		} while(aux != NULL);
	}
    printf("*-------------------------------------------------*\n");
    free(aux);
}

int main(){
    system("clear");
    int qntd=0, qntdt=0;
    printf("Digite a quantidade de tweets por bloco: ");
    scanf("%d", &qntd);
    getchar();
    printf("Digite a quantidade de tweets: ");
    scanf("%d", &qntdt);
    getchar();
    
    for(int i = 0; i < qntdt; i++){
        adicionar(qntd);
    }
  
    imprimir();
    printf("\n");
    //erase();
    //imprimir();
    return 0;
}
