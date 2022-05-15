#include "lib.h"

#define Admin = 1
#define Funcionario = 0

int autent = -1;

int LogarConta(int aut){
    printf("\n[%d]", aut);
    if(aut==-1){
        printf("Voce nao esta logado");
        return -1;
    }
    else if(aut == 1){
        printf("Voce esta logado como Administrador");
        autent = 1;
        Administrador(autent);
    }
    else{
        printf("Voce esta logado ao NOME");
        autent = 0;
        FdCaixa(autent);
    }
    return 1;
}

void menuscope(){
    if(autent==-1){
        LogarConta(autent);
    }

    else if(autent == 1){
        printf("\n*-------------------- Administrador --------------------*\n");
        printf("* 1-| Cadastrar Funcionario:                            *\n");
        printf("* 2-| Cadastrar Produto:                                *\n");
        printf("* 3-| Adicionar Estoque:                                *\n");
        printf("* 4-| Consulta Estoque:                                 *\n");
        printf("* 0-| Sair:                                             *\n");
        printf("*-------------------------------------------------------*\n");
        printf("Opção: ");
    }

    else{
        printf("\n*-------------------- Funcionario --------------------*\n");
        printf("* 1-| Fazer Venda:                                      *\n");
        printf("* 2-| Consulta Estoque:                                 *\n");
        printf("* 0-| Sair:                                             *\n");
        printf("*-------------------------------------------------------*\n");
        printf("Opção: ");
    }
}

int Administrador(int autent){
    int choice;
    if(autent != 1)
        return 0;
    do{
        char nomeprod[50];
        int valorvenda, valorcompra, inqntd, pos;
        system("clear");
        menuscope();
        scanf("%d", &choice);
        getchar();
        
        switch (choice){
        case 0:
            exit(0);
            break;
        case 1:
            //CadastrarFuncionario();
            break;
        case 2:
            printf("\n*-------------------- Cadastrar Produto --------------------*\n");
            printf("* Nome:                                                       *\n");
            fgets(nomeprod, sizeof nomeprod, stdin);
            printf("* Valor de Venda:                                             *\n");
            scanf("%d", &valorvenda);
            printf("* Valor de Compra:                                            *\n");
            scanf("%d", &valorcompra);
            printf("* Entrada de produto (Quantidade):                            *\n");
            scanf("%d", &inqntd);
            printf("* Posiçao da lista:                                           *\n"); // So por enquanto nao edito o codico
            scanf("%d", &pos);
            printf("*-------------------------------------------------------------*\n");
            CadastrarProduto(nomeprod, valorvenda, valorcompra, inqntd, pos);
            break;
        case 3:
            printf("AdicionarEstoque");
            //AdicionarEstoque();
            break;
        case 4:
            printf("Consulta Estoque\n");
            ConsultaEstoque();
            break;
        default:
            break;
        }
    }while(choice!=0);
    return 0;
}
int FdCaixa(int autent){
    int choice;
    if(autent != 0)
        return 0;

    do{
        system("clear");
        menuscope();
        scanf("%d", &choice);
        getchar();
        
        switch (choice){
        case 0:
            exit(0);
            break;
        case 1:
            printf("FazerVenda");
            //FazerVenda();
            break;
        case 2:
            printf("ConsultaEstoque");
            //ConsultaEstoque();
            break;
        default:
            break;
        }
    }while(choice!=0);
    
    return 0;
}

