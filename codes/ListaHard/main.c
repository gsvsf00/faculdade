//Nome: Gabriel da Silva Vasconcelos
//Matricula: 473801
//GitHub Repository: https://github.com/gsv99/faculdade

//Compilar gcc main.c quests.c func.c -o main -lm
#include "func.h"

void menumain(){
    int i=1,j=9,h=13;
    
    for(i; i<=2;i++){
        printf("Questao[%d]:\n", i);
    }
    /*for(j; j<=11;j++){
        printf("Questao[%d]:\n", j);
    }
    for(h; h<=15;h++){
        printf("Questao[%d]:\n", h);
    }*/
    printf("Digite 0 para sair:\n");
    printf("Digite qual questao: ");
}



int main(){
    int questoes;
    system("cls");
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
    /*case 3:
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
    case 9:
        q9();
        break;        
    case 10:
        q10();
        break;
    case 11:
        q11();
        break;
    case 13:
        q13();
        break;
    case 14:
        q14();
        break;
    case 15:
        q15();
        break;*/
    default:
        break;
        }
    }
    return 0;
}
