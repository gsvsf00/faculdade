#include "q1func.h"

void q1(){
    int algo;
    float valor, h, retorno;
    while(4){
        menu();
        scanf("%d", &algo);
        getchar();
        system("clear");
    switch (algo){
        case 1:
            printf("Digite o valor do raio: ");
            scanf("%f", &valor);
            getchar();
            retorno = CompCircu(valor);
            printf("\nComprimento da circunferência: %f", retorno);
            break;
        case 2:
            printf("Digite o valor do raio: ");
            scanf("%f", &valor);
            getchar();
            retorno = AreaCircu(valor);
            printf("\nÁrea da circunferência: %f", retorno);
            break;
        case 3:
            printf("Digite o valor do raio: ");
            scanf("%f", &valor);
            getchar();
            printf("\nDigite o valor da altura: ");
            scanf("%f", &h);
            getchar();
            retorno = CompCircu(valor)*h;
            printf("\nVolume do cilindro: %f", retorno);
            break;
        case 4:
            exit(4);
            break;
        default:
            printf("Errado\n");
            break;
        }
    }
}   