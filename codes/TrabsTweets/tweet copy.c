#include "tw.h"

int count = 0, qnttwt = 0 , qqtwt = 0;

int defsize(){

    printf("\nDigite quantidade maxima de tweets: ");
    scanf("%d", &qnttwt);
    
    if(qnttwt ==0){
        system("clear");
        printf("\nVocê definiu para [0]! \nRepita o processo novamente!\n");
        getchar();
        defsize();
    }
    getchar();
    printf("Alocar de quantos em quantos: ");
    scanf("%d", &qqtwt);

    return 0;
}
/*void armazenameto(){
    char ask;
    if (qnttwt == 0)
        defsize();
    else{
        printf("\n**********************Armazenamento**********************\n");
        printf("Máximo Tweets [%d]\nAlocamento de quantos por quanto [%d]\n", qnttwt,qqtwt);
        printf("Deseja mudar o armazenmanto ? Obs: Tweets e Trending Topics irão ser deletados\n\nPress 'y' para Sim\nPress 'n' para Não\n");
        printf("\n**********************Armazenamento**********************\n");
        ask = getchar();
        if(ask == 'y'){
            free(*t);
            count = 0;
            defsize();
        }
        else{
        printf("Press 'Enter'");
        getchar();
        }
    }
}*/



void digite(){
    char *t[qnttwt];
    
    for (int i = 0; i < qnttwt; i++){
        t[i]= (char*) malloc(281);
        
    }
    
    printf("Tweet: ");
    fgets(t[count], sizeof ((char*)malloc(280)), stdin);
}

/*void digite(){
    int lent;
    char *t[qnttwt];
    for (int i = 0; i < qnttwt; i++){
        t[i]= (char*) malloc(281);
        
    }
    
    printf("Tweet: ");
    fgets(t[count], sizeof ((char*)malloc(280)), stdin);
    
    lent = strlen(*t);
    if (t[lent - 1] == '\n') {
    // nome completo, com ENTER incluido
        t[--lent] = 0; // apagar o ENTER
    } 
    else {
    // ENTER e possivelmente outros caracteres ficaram no buffer
    int ch;
    do 
        ch = getchar(); 
    while (ch != '\n'); // limpa caracteres extra
    }
}*/

void tweetar(){
    int x;

    if (qnttwt == 0){
        printf("Você não definiu o armazenamento!\n");
        printf("Press 'Enter'");
        getchar();
        defsize();
    }
    else if(count < qnttwt) {
        if(count == 0){
            printf("Alocando espaço para os tweets ");
            for(x=0; x < qqtwt; x++){ 
                printf("%d, ", x);
            }
            printf("\nPrimeiro tweet !\n");
            digite();
            count++;
        }
        else {
            if(count%qqtwt==0){
                printf("Alocando espaço para os tweets ");
                for(x = count; x < (qqtwt+count); x++){ 
                    printf("%d, ", x);
                }
            }
            printf("\n[%d/%d] ", count+1,qnttwt);
            digite();
            //printf("Tweets Salvos:");
            count++;
        }
    }
    else{
        printf("Você atingiu o limite de tweets [%d/%d]\n", count,qnttwt);
        printf("Press 'Enter'");
        getchar();
    }
    
}

/*void trendings(){
    if(t != NULL){
        int i,j;
        char *hashtag;
        for(i=0; t[i] != '\0'; i++){
            if(t[i]=='#'){
                for(j = i; t[j] != ' '; j++){
                    printf("%c");
                }
            }

        }        
    }        
    else
        printf("Não há tweets\n");
        printf("\nPress 'Enter'");
        getchar();
}

void tweets(){
    //int count = 0;
    int j;
    printf("\n**********************Time Line**********************\n");
    for(j = 0; j < count ; j++)
        printf("%s", t[j]);
    printf("\n*******************End Of Time Line******************\n");
    printf("Press 'Enter'");
    getchar();
}

void clear(){
    char ask;
    if(t == NULL){
        printf("Não há tweets\n");
        printf("Press 'Enter'");
        getchar();
    }
    else{
        printf("\n**********************Limprar**********************\n");
        printf("Deseja realmente limpar ? Obs: Tweets e Trending Topics irão ser deletados\n\nPress 'y' para Sim\nPress 'n' para Não\n");
        printf("\n**********************Armazenamento**********************\n");
        ask = getchar();
        if(ask == 'y'){
            free(t);
            count = 0;
        }
        else{
        printf("Press 'Enter'");
        getchar();
        }
    }
}*/