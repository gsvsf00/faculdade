#include "fila.h"

#define MAX 7

float vetor[MAX];
int primeiro, ultimo, total;

int qCreate(){
    primeiro = ultimo = -1;
    total = 0;
}
int qDestroy(){
    primeiro = ultimo = -1;
    total = 0;
}
int qIn(float e){
    if(qIsFull())
        return FALSE;
    
    if(qIsEmpty()){
        primeiro = ultimo = 0;
        vetor[primeiro] = e;
    //    total = 1;
        return TRUE;
    }
    ultimo = (ultimo + 1) %MAX;
    vetor[ultimo] = e;
    total++;
    return TRUE;
}

int qOut(float *e){
    if(qIsEmpty())
        return FALSE;
    else
    *e = vetor[primeiro];
    primeiro = (primeiro+1)%MAX;
    total--;
    return FALSE;
}

int qIsFull(){
    if(total>=MAX)
        return TRUE;
    return FALSE;
}

int qIsEmpty(){
    if(total==0)
        return TRUE;
    return FALSE;
}