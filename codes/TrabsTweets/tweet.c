#include "tw.h"

char assunto[19], t[279];
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
        if(ask == 'y')
            defsize();
        /*else{
        printf("Press 'Enter'");
        getchar();
        }*/
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
    return 0;
}

void digite(){
    printf("\nTweet: ");
    scanf("%s", t);
}

void tweetar(){
    if (qnttwt == 0){
        printf("Você não definiu o armazenamento!\n");
        printf("Press 'Enter'");
        getchar();
        defsize();
    }
    else {
        if(count == 0){
            printf("\nPrimeiro tweet !\n");
            digite();
            count++;
        }
        else if(count > 0 && count < 5){
            printf("[%d/%d]", count,qnttwt);
            digite();
            count++;
        }
        else {
            printf("[%d/%d]", count,qnttwt);
            digite();
            printf("Tweets Salvos:");
            count++;
        }
    }
}

void tweets(){
    //int count = 0;
    printf("\n**********************Time Line**********************\n");
    printf("%s", t);
    printf("\n*******************End Of Time Line******************\n");
    printf("Press 'Enter'");
    getchar();
}
