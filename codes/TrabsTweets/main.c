//Nome: Gabriel da Silva Vasconcelos
//Matricula: 473801
//GitHub Repository: https://github.com/gsv99/faculdade

//Compilar "gcc main.c tweet.c -o main"
#include "tw.h"

BLOCO* inicializa(BLOCO *p){
    NO *inicio = NULL;
    NO *fim = NULL;
    int tam = 0;

    return p;
}

int main(){
    BLOCO *A;
    A = inicializa(A);
    char tweattar[280]= {"Será que essa merda vai da certo? espero que simn"};

    adicionar(A,tweattar);
    
    //imprimir();
    printf("\n");
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
