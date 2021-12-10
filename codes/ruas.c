#include <stdio.h>
#include <stdlib.h>


int main(){
    int qntd, minx, maxx, miny, maxy;
    
    printf("Informe quantos pontos: [x,y]\n");
    scanf("%d", &qntd);

    int cord[qntd][2];
    for(int i=0; i<qntd; i++){
        printf("Digite a %d: x y\n", i+1);
        scanf("%d %d", &cord[i][0], &cord[i][1]);

        if(i==0){
            minx = cord[i][0];
            maxx = cord[i][0];
            miny = cord[i][1];
            maxx = cord[i][1];
        }
        if(cord[i][0]<minx) minx = cord[i][0];
        if(cord[i][0]<maxx) maxx = cord[i][0];
        if(cord[i][1]<miny) miny = cord[i][1];
        if(cord[i][1]<maxy) maxx = cord[i][1];
    }
    printf("Ponto Min: [%d,%d]\nPonto Max [%d,%d]\n", minx, miny, maxx,maxy);
    return 0;
}