#include "fila.h"
#define MAX 7

int main(){
    float vet[MAX]={10,20,30,40,50,60};
    cria();
    int tam = sizeof(vet)/sizeof(float);
    printf("tam vetor = %d\n", tam);
    for(int i=0;i<tam;i++){
        if(full()== 0)
            inserir(vet[i]);
        else
            printf("fila cheia\n");
    }
    while(vazio()== 0){
        float aux;
        retirar(&aux);
        printf("Saiu %f\n", aux);
    }
    int teste = vazio();
    int testee = full();
    printf("%d\n%d\n", teste, testee);

    exit(0);
    return 0;
}