#include "fila.h"

int main(){
    float vet[]={10,20,30,40,50,60};
    qCreate();
    int tam = sizeof(vet)/sizeof(float);
    printf("tam vetor = %d\n", tam);
    for(int i=0;i<tam;i++){
        if(qIsFull()== FALSE)
            qIn(vet[i]);
        else
            printf("fila cheia\n");
    }
    while(qIsEmpty()== FALSE){
        float aux;
        qOut(&aux);
        printf("Saiu %f\n", aux);
    }
    qDestroy();
    exit(0);
    return 0;
}