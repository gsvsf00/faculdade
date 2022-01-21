#include "lib.h"

/*
programa { 
    "Pode ou n ter grafico"
    autentificaçao{
        Admin
        Funcionario
    }

    Administrador {

        Cadastrar Funcionario{
            nome
            login
            senha
            id funcionario
        }

        Cadastrar produto {
            Nome
            Valor {
                Valor de compra
                Valor de Venda
            }
            ID
            Quantidade?
        }

        Estoque{
            Movimentaçao de estoque{
                "PRODUTO JA CADASTRADO"
                Data/Hora
                Qntd
            }
        }
    }

    Vendas{
        (Consultas de Produto)
        (Movimentaçao de estoque)
        (Nota Fiscal)
        (Relatorio Final)
    } 

    Funcionario {
        Consultas (Estoque)
        Vendas
        Bater ponto?
        
    }

    Fechar Caixa(Relatorio Final)
}

*/

void menumain(){
    printf("\n*--------------------Bem-Vindo--------------------*\n");
    printf("* 1-| Logar Conta:                                *\n");
    printf("* 0-| Sair:                                       *\n");
    printf("*-------------------------------------------------*\n");
    printf("Opção: ");
}

int main(){
    int choice, aut=-1;
    do{
        system("clear");
        menumain();
        scanf("%d", &choice);
        getchar();
        
        switch (choice){
        case 0:
            exit(0);
            break;
        case 1:
            printf("Funcionario: 0 | Admin: 1\n"); // Gambiarra
            printf("Digite: ");
            scanf("%d", &aut);
            LogarConta(aut);
            break;
        default:
            break;
        }
    }while(choice!=0);
    return 0;
}