#include "tw.h"

char assunto[19];
char t[279];
int count = 0;

int defsize(){
        printf("Definido atualmente para: [%d]\n", qnttwt);
        printf("\nDigite quantos tweets quer armazenar: ");
        scanf("%d", &qnttwt);
        getchar();
        return 0;
}

void digite(){
    printf("\nDigite sua # \n");
    scanf("%c", assunto);
    printf("\nTweet: \n");
    scanf("%c", t);
}

void tweetar(){
    if (qnttwt == 0)
        defsize();
    
    else {
        if(count == 0){
            printf("\nPrimeiro tweet !\n");
            digite();
            count++;
        }
        else if(count > 0 && count < 5){
            printf("Tweet: [%d/%d]", count,qnttwt);
            digite();
            count++;
        }
        else {
            printf("Tweet: [%d/%d]", count,qnttwt);
            digite();
            printf("Tweets Salvos:");
            count++;
        }
    }
}

