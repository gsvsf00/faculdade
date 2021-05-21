//Nome: Gabriel da Silva Vasconcelos
//Matricula: 473801
//GitHub Repository: https://github.com/gsv99/faculdade

//Compilar gcc main.c quests.c func.c -o main -lm
#include "func.h"

void menumain(){
    int i=1;
    
    for(i; i<=7;i++){
        printf("Questao[%d]:\n", i);
    }
    printf("Digite 0 para sair:\n");
    printf("Digite qual questao: ");
}



int main(){
    int questoes;
    system("clear");
    menumain();
    scanf("%d", &questoes);
    getchar();
    while (questoes!=0){
    switch (questoes)
    {
    case 0:
        exit(0);
        break;
    case 1:
        q1();
        break;
    case 2:
        q2();
        break;
    case 3:
        q3();
        break;
    case 4:
        q4();
        break;
    case 5:
        q5();
        break;
    case 6:
        q6();
        break;
    case 7:
        q7();
        break;

    default:
        break;
        }
    }
    return 0;
}
