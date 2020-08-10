//Nome: Gabriel da Silva Vasconcelos
//Matricula: 473801
//GitHub Repository: https://github.com/gsv99/faculdade

//Compilar gcc main.c quests.c func.c -o main -lm
#include "tw.h"
int qnttwt = 0;

void menumain(){
    printf("\n------Bem-Vindo------\n");
    printf(" 1-| Login: \n");
    printf(" 2-| Tweetar: \n");
    printf(" 3-| Tweets: \n");
    printf(" 4-| Treending Topic: \n");
    printf(" 5-| Definir quantos Tweets vai ser armazenados: \n");


    printf("Digite 0 para sair:\n");
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
        printf("Digite o user: Ex: @gsvsf00 \n");
        break;
    case 2:
        tweetar();
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        defsize();
        break;
    default:
        break;
        }
    }
    return 0;
}
