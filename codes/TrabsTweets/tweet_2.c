#include "tw.h"

//aqui bloco do tweets
NO *inicio = NULL;
NO *fim = NULL;
int tam = 0;


//aqui vai o bloco do Trending Topic
TRD *teto = NULL;
TRD *chao = NULL;
int size = 0;

void addbloco(int qntd){

    NO *novo =(NO*) malloc (sizeof(NO));
    novo->count = 0;
    novo->qndtweet = qntd;
    novo->twe = (char**)malloc(sizeof(char*) * novo->qndtweet);

    for(int i = 0; i< novo->qndtweet; i++)
		novo->twe[i] = NULL;

    novo->prox = NULL;
        
    if(inicio == NULL){ //tam == 0 - lista vazia :D
        inicio = novo;
        fim = novo;
    }
                
    else{// no fim da lista
        fim->prox = novo;
        fim = novo;
    }
    tam++;
}

void criartweet(int qntd, char *str){

    if( (inicio == NULL && fim == NULL) || (fim->qndtweet == fim->count))
		addbloco(qntd);
	
	fim->twe[ fim->count ] = (char*)malloc(sizeof(char) * strlen(str)+1 );
	strcpy( fim->twe[fim->count], str);
	
	fim->count += 1;
    trendings();
}

void imprimir(){
    NO *aux = inicio;

    int i=1;
    printf("\n*--------------------Imprimindo--------------------*\n");
    if(inicio == NULL){
		printf("Vazio!!\n");
	}else{	         
		do{
            printf("\n");
            for(int j=0; j < aux->count ; j++){//*aux->twe[j] != '\0'
                    printf("Bloco[%d]\n        Tweet[%d]: %s\n", i, j, aux->twe[j]);
                }
                aux = aux->prox;
                i++; 
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
        for(int j = 0; j < aux->count; j++){ //Aqui é o for dentro do bloco
            const char s[2] = " ";
            char *hash;
            char *ret;

            ret = memchr(aux->twe[j], *s, strlen(aux->twe[j]));
            //ret = strpbrk(aux->twe[j], s);
            if(ret) {
                hash = strchr(aux->twe[j], '#');
                hash = strtok(hash, s);
                //printf("%s\n", hash);
                //printf("Njwenjd\n");
                addtrending(hash);
            }
            else
                break;
        }
        aux = aux->prox;
    } while(aux != NULL);
}

void addtrending(char *hash){
    TRD *new =(TRD*) malloc (sizeof(TRD));
    new->top = 1;
    new->token = hash;
    new->up = NULL;
    new->down = NULL;

    if(teto == NULL && chao == NULL){
        teto = new;
        chao = new;
        size++;
    }
    else{
        chao->down = new;
        new->up = chao;
        chao = new;
        size++;
        //reodenar();
    }
}

void reodenar(){
    TRD * aux = chao;
    if(aux = NULL)
        return;
    TRD * temp =  aux;
    do{
        if(strcmp(temp->token, aux->up->token) == 0){
            temp->up += 1;
            temp->up->down = NULL;
            free(temp);
        }
        aux = aux->up;
    }while(aux->up != NULL);
}

/*
if((aux->down != NULL && aux->up != NULL) || (aux->down == NULL && aux->up != NULL)){
                        temp->down = aux->down;
                        aux->up = temp->up;
                        temp->up->down = aux;
                        temp->up = aux;
                        aux->down->up = temp;
                        aux->down = temp;
                    }
                    else if(aux->down != NULL && aux->up == NULL){
                        temp->down = aux->down;
                        aux->up = temp->up;
                        temp->up->down = aux;
                        temp->up = aux;
                        aux->down->up = temp;
                        aux->down = temp;
                    }
*/

/*int FiltrarPorHashtag(ListaBlocos* l, char* str)
{
	if( l->prim->tweets[0] == NULL){
		printf("*** Sem tweets ***\n");
		return 1;
	}
	
	Bloco* aux = l->prim;
	int flag = 0;
	
	printf("\n");
	for(int i = 0; i<80; i++)
		printf("-");
	while( aux != NULL)
	{
		for( int i = 0; i<aux->N; i++)
		{
			if(aux->tweets[i] != NULL)
				if( strstr(aux->tweets[i], str) != NULL)
				{
			  		printf("%s\n", aux->tweets[i]);
			  		for(int i = 0; i<80; i++)
						printf("-");
					
					flag +=1;
				}
		}
		aux = aux->prox;
	}
	printf("\n");
	
	return flag;
}*/

void imprimirTrending(){
    TRD *aux = teto;
    int pos=1;
    printf("\n*--------------------Trending Topics--------------------*\n");
    if(teto == NULL)
        printf("\n              Nenhuma Trending no momento \n");
    while(aux != NULL){
        printf("\n%d: %s - [%d]\n", pos, aux->token, aux->top);
        pos++;
        aux = aux->down;
    } 
    printf("\n*--------------------------------------------------------*\n");
    free(aux);
}

void tweet_file(){
	FILE *arq = fopen("tweets_file.txt", "w");
    NO *aux = inicio;

    if (arq == NULL){
        printf("Error opening file!\n");
        exit(1);
    }
    
    if(inicio == NULL){
		fprintf(arq, "Vazio!!\n");
	}else{
        do{
            printf("\n");
            for(int j=0; j < aux->count ; j++){
                    //printf("%s\n", aux->twe[j]);
                    fprintf(arq, "%s\n", aux->twe[j]);
                }
                aux = aux->prox;
		} while(aux != NULL);	
	}

	fclose(arq);
	//printf("\nTecle [Enter] para voltar ao menu...");
	//system("pause>null");
}

void deletar_tweet(){
	char str[20] = "";
	int result;
	FILE *arq;
	arq = fopen("tweets_file.txt", "w");
	if (arq == NULL) {
		printf("Erro no arquivo\n");
		exit(1);
	}
	result = fputs(str, arq);
	if (result == EOF)
		printf("Erro de escrita\n");

	fclose(arq);
	getchar();
}

/*void addtrending(char *hash){
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
        for(int i=0; aux != NULL; i++){
            if(strcmp(aux->token, new->token) == 0){
                printf("aux->token: %s\nnew->token: %s\n", aux->token, new->token);
                printf("Aqui chegou\n");
                new->top += aux->top;
                aux = new;
                break;
            }
            else{
                chao->down = new;
                new->up = chao;
                chao = new;
                size++;
                aux = aux->down;
            }
            aux = aux->down;
        }
        
    }
    else
        printf("insercao invalida ocorrida ao adicionar trending! :/\n");
}*/