//Nome: Gabriel da Silva Vasconcelos
//Matricula: 473801
//GitHub Repository: https://github.com/gsv99/faculdade

//Compilar "gcc main.c tweet_2.c -o main"
#include "tw.h"

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
        addtweet(qntd);
    }
  
    imprimir();
    //teste();
    printf("\n");
    trendings();
    //erase();
    //imprimir();
    return 0;
}


/*int qnttwt = 0, qqtwt=0;

void menumain(){
    printf("\n*--------------------Bem-Vindo--------------------*\n");
    printf("* 1-| Tweetar:                                    *\n");
    printf("* 2-| Tweets:                                     *\n");
    printf("* 3-| Treending Topic:                            *\n");
    printf("* 4-| Armazenamento:                              *\n");
    printf("* 5-| Limpar:                                     *\n");
    printf("* 0-| Sair:                                       *\n");
    printf("*-------------------------------------------------*\n");
    printf("Opção: ");
}


int main(){
    int choice;
    while (choice!=0){
        system("clear");
        menumain();
        scanf("%d", &choice);
        getchar();
        
        switch (choice)
        {
        case 0:
            exit(0);
            break;
        case 1:
            tweetar();
            break;
        case 2:
            tweets();
            break;
        case 3:
            trendings();
            break;
        case 4:
            armazenameto();
            break;
        case 5:
            clear;
            break;
        default:
            break;
            }
    }
    return 0;
}*/
