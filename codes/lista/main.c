#include "func.h"

void menumain(){
    int i=1;
    
    for(i; i<=4;i++){
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
    default:
        break;
        }
    }
    return 0;
}
