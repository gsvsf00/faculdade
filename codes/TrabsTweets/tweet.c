#include "tw.h"

char assunto[19], t[281], *ttransfer ,*tsalvo;
int count = 0;

void armazenameto(){
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
            free(ttransfer);
            count = 0;
            defsize();
        }
        else{
        printf("Press 'Enter'");
        getchar();
        }
    }
}

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

    ttransfer = (char*) malloc((281 * qnttwt) * sizeof(char));

    return 0;
}

/*void digite(){
    printf("Tweet: ");
    fgets(t);
    if(strlen(t) > 281){
        printf("Você ultrapossou o limite de char permetido.\nDigite novamente: ");
        int ch;
        do 
            ch = getchar(); 
        while (ch != '\n'); // limpa caracteres extra
        digite();
    }
}*/
void digite(){
    int lent;
    printf("Tweet: ");
    fgets(t, sizeof t, stdin);
    lent = strlen(t);
    if (t[lent - 1] == '\n') {
    /* nome completo, com ENTER incluido */
        t[--lent] = 0; // apagar o ENTER
    } 
    else {
    /* ENTER e possivelmente outros caracteres ficaram no buffer */
    int ch;
    do 
        ch = getchar(); 
    while (ch != '\n'); // limpa caracteres extra
    }
}

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
    
    tsalvo = t;
    strcat(ttransfer, tsalvo);
    strcat(ttransfer, "\n");


}

void tweets(){
    //int count = 0;
    printf("\n**********************Time Line**********************\n");
    printf("%s", ttransfer);
    printf("\n*******************End Of Time Line******************\n");
    printf("Press 'Enter'");
    getchar();
}
