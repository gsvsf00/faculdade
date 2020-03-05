//Compilar no visual studio 17 // Trabalho feito valendo 6 pontos
//definição para remover a segurança da CRT
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
//incluindo bibliotecas para o programa
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <string.h>

// Início do sistema de rank //

struct{
	char pX[20];
	char pO[20];
}rank;

// Variavel que armazena a data e a hora
char dateStr[9];
char timeStr[9];
// função de gravação
void gravacao_rank();
void gravacao_rank_empate();
// Fim do sistema de rank//

// função para limpar o buffer do teclado
void limpar_teclado_buffer();

// Início do sistema do menu //
void menu();
void pvp();
void mostrar_rank();
void deletar_rank();

// Fim do sistema do menu //

//inicio das funções do jogo da veia PVP//

	  //DIM = DIMENSSAO DO TABULEIRO
#define DIM 3
int vez;
void limpar(void);
void zeraTabuleiro(int tabuleiro[][DIM]);
void exibeTabuleiro(int tabuleiro[][DIM]);
int checaLocal(int tabuleiro[][DIM], int linha, int coluna);
int checaLinha(int tabuleiro[][DIM]);
int checaColuna(int tabuleiro[][DIM]);
int checaDiagonal(int tabuleiro[][DIM]);
int checaEmpate(int tabuleiro[][DIM]);
int checaTermino(int tabuleiro[][DIM], int vez);
void jogada(int tabuleiro[][DIM]);

//fim das funções do jogo da veia PVP//

//início da main
int main() {
	int opcao;
	do {
		system("cls");
		printf("JOGO DA VELHA\n\n\n");
		menu();
		printf("\nEscolha uma opcao: ");
		// esse while serve para evitar digito de letra
		while (!scanf("%d", &opcao))
		{
			while (getchar() != '\n')
			{
				printf("\nEscolha uma opcao: ");
				system("pause>null");

			}
		}
		//setbuf serve para limpar o buffer do teclado
		switch (opcao) {
		case 1: pvp(); break;
		case 2: mostrar_rank(); setbuf(stdin, NULL); break;
		case 3: deletar_rank(); setbuf(stdin, NULL); break;
		case 4: exit(1); setbuf(stdin, NULL); break;
		default: printf("\n\nOpcao invalida\n");
			system("pause");
			break;
		}
	} while (opcao != 4);
	system("pause");
	return 0;
}
//aqui são as saidas do MENU
void menu() {
	printf("MENU\n\n");
	printf("Jogar Pessoa Vs Pessoa 1\n");
	printf("Mostrar Ranking 2\n");
	printf("Deletar Ranking 3\n");
	printf("Sair            4\n");
}
// Aqui inicia o jogo da velha

//limpador de buffer
void limpar_teclado_buffer(void)
{
	int c = 0;
	while ((c = getchar()) != '\n' && c != EOF) {}
	return;
}
//Aqui pode se colocar o nome dos player e chamas as funçoes em loop para começar o jogo
void pvp() {
	int tabuleiro[DIM][DIM];
	zeraTabuleiro(tabuleiro);

	printf("Player X: Insira Nome ate 20 character \n");
	scanf("%s", rank.pX);
	printf("Player O: Insira Nome ate 20 character \n");
	scanf("%s", rank.pO);


	do
	{
		limpar();
		exibeTabuleiro(tabuleiro);
		jogada(tabuleiro);

	} while (checaTermino(tabuleiro, vez) != 1);

	system("pause");
}
// Limpa a TELA //
void limpar(void) {
	system("cls");
}
//Se for jogar novamente o tabuleiro será zerado com esta função
void zeraTabuleiro(int tabuleiro[][DIM])
{
	int linha, coluna;
	for (linha = 0; linha < DIM; linha++)
		for (coluna = 0; coluna < DIM; coluna++)
			tabuleiro[linha][coluna] = 0;
}
//Faz a exibição do tabuleiro no console
void exibeTabuleiro(int tabuleiro[][DIM])
{
	int linha, coluna;
	putchar('\n');

	for (linha = 0; linha < DIM; linha++)
	{
		for (coluna = 0; coluna < DIM; coluna++)
		{
			if (tabuleiro[linha][coluna] == 0)
				printf("    ");
			else
				if (tabuleiro[linha][coluna] == 1)
					printf("  X ");
				else
					printf("  O ");

			if (coluna != (DIM - 1))
				printf("|");
		}
		putchar('\n');
	}
	putchar('\n');
}
//Aqui vai chegar no tabuleiro se já exite algo escrito.
int checaLocal(int tabuleiro[][DIM], int linha, int coluna)
{
	if (linha < 0 || linha >(DIM - 1) || coluna < 0 || coluna >(DIM - 1) || tabuleiro[linha][coluna] != 0)
		return 0;
	else
		return 1;
}
//Aqui faz a chegagem das somas de cada linha, se a soma de alguma linha for diferente de 3 ou -3 não há ganhador por linha
int checaLinha(int tabuleiro[][DIM])
{
	int linha, coluna,
		soma;

	for (linha = 0; linha < DIM; linha++)
	{
		soma = 0;

		for (coluna = 0; coluna < DIM; coluna++)
			soma += tabuleiro[linha][coluna];

		if (soma == DIM || soma == (-1)*DIM)
			return 1;
	}

	return 0;
}
//Aqui faz a chegagem das somas de cada coluna, se a soma de alguma coluna for diferente de 3 ou -3 não há ganhador por coluna
int checaColuna(int tabuleiro[][DIM])
{
	int linha, coluna,
		soma;


	for (coluna = 0; coluna < DIM; coluna++)
	{
		soma = 0;

		for (linha = 0; linha < DIM; linha++)
			soma += tabuleiro[linha][coluna];

		if (soma == DIM || soma == (-1)*DIM)
			return 1;
	}

	return 0;
}
//Aqui faz a chegagem da soma das diagonais, se a soma de uma diagonal for diferente de 3 ou -3 não há ganhador por diagonal
int checaDiagonal(int tabuleiro[][DIM])
{
	int linha,
		diagonal_principal = 0,
		diagonal_secundaria = 0;

	for (linha = 0; linha < DIM; linha++)
	{
		diagonal_principal += tabuleiro[linha][linha];
		diagonal_secundaria += tabuleiro[linha][DIM - linha - 1];
	}

	if (diagonal_principal == DIM || diagonal_principal == (-1)*DIM ||
		diagonal_secundaria == DIM || diagonal_secundaria == (-1)*DIM)
		return 1;

	return 0;
}
// Aqui faz a checagem se ouve empate
int checaEmpate(int tabuleiro[][DIM])
{
	int linha, coluna;

	for (linha = 0; linha < DIM; linha++)
		for (coluna = 0; coluna < DIM; coluna++)
			if (tabuleiro[linha][coluna] == 0)
				return 0;

	return 1;
}

//Aqui vai checar o termino do jogo
int checaTermino(int tabuleiro[][DIM], int vez)
{
	if (checaLinha(tabuleiro))
	{
		if ((vez % 2) + 1 == 1) {
			printf("Jogo encerrado. Jogador %s venceu !\n\n", rank.pO);
			//Comando para pegar data e hora e armazena em um char
			_strdate(dateStr);
			_strtime(timeStr);
		}
		else {
			printf("Jogo encerrado. Jogador %s venceu !\n\n", rank.pX);
			//Comando para pegar data e hora e armazena em um char
			_strdate(dateStr);
			_strtime(timeStr);
		}
		exibeTabuleiro(tabuleiro);
		gravacao_rank();
		return 1;
	}

	if (checaColuna(tabuleiro))
	{
		if ((vez % 2) + 1 == 1) {
			printf("Jogo encerrado. Jogador %s venceu !\n\n", rank.pO);
			//Comando para pegar data e hora e armazena em um char
			_strdate(dateStr);
			_strtime(timeStr);
		}
		else {
			printf("Jogo encerrado. Jogador %s venceu !\n\n", rank.pX);
			//Comando para pegar data e hora e armazena em um char
			_strdate(dateStr);
			_strtime(timeStr);
		}
		gravacao_rank();
		exibeTabuleiro(tabuleiro);
		return 1;
	}

	if (checaDiagonal(tabuleiro))
	{
		if ((vez % 2) + 1 == 1) {
			printf("Jogo encerrado. Jogador %s venceu !\n\n", rank.pO);
			//Comando para pegar data e hora e armazena em um char
			_strdate(dateStr);
			_strtime(timeStr);
		}
		else {
			printf("Jogo encerrado. Jogador %s venceu !\n\n", rank.pX);
			//Comando para pegar data e hora e armazena em um char
			_strdate(dateStr);
			_strtime(timeStr);
		}
		gravacao_rank();
		exibeTabuleiro(tabuleiro);
		return 1;
	}

	if (checaEmpate(tabuleiro))
	{
		printf("Jogo encerrado. Ocorreu um empate! !\n\n");
		exibeTabuleiro(tabuleiro);
		gravacao_rank_empate();
		return 1;
	}
	return 0;
}

//Aqui faz as jogadas no tabuleiro
void jogada(int tabuleiro[][DIM])
{
	int linha, coluna;
	vez++;
	if ((vez % 2) + 1 == 1) {
		printf("\n--> Jogador O: %s \n", rank.pO);
	}
	else printf("\n--> Jogador X: %s \n", rank.pX);

	do
	{		
		printf("Linha: ");
		//Evita loop digitando algum char
		
		while (!scanf("%d", &linha))
		{
			limpar_teclado_buffer();
			while (getchar() != '\n')
			{
				printf("Linha: ");
				limpar_teclado_buffer();

			}
		}
		limpar_teclado_buffer();
		linha--;

		printf("Coluna: ");

		while (!scanf("%d", &coluna))
		{
			limpar_teclado_buffer();
			while (getchar() != '\n')
			{
				printf("Coluna: ");
				limpar_teclado_buffer();

			}
		}
		limpar_teclado_buffer();
		coluna--;

		if (checaLocal(tabuleiro, linha, coluna) == 0) {
			printf("Posicao ocupada ou inexistente, escolha outra.\n");
		}
	} while (checaLocal(tabuleiro, linha, coluna) == 0);
	if (vez % 2) {
		tabuleiro[linha][coluna] = 1;
	}
	else{
		tabuleiro[linha][coluna] = -1;
	}
}
//fim do jogo da velha//

// rank //

//Aqui faz a gravação do arquivo
void gravacao_rank() {
	FILE *arq;
	arq = fopen("ranking.txt", "a");
	if ((vez % 2) + 1 == 1) {
		fprintf(arq, "%s 10 %s \n", rank.pO, &dateStr, &timeStr);
	}
	else fprintf(arq, "%s 10 %s \n", rank.pX,  &dateStr, &timeStr);
	fclose(arq);
	printf("\nTecle [Enter] para voltar ao menu...");
	system("pause>null");
}

void gravacao_rank_empate() {
	FILE *arq;
	arq = fopen("ranking.txt", "a");
		fprintf(arq, "%s 5 %s \n", rank.pO, &dateStr, &timeStr); 
		fprintf(arq, "%s 5 %s \n", rank.pX, &dateStr, &timeStr);
	fclose(arq);
	printf("\nTecle [Enter] para voltar ao menu...");
	system("pause>null");
}

//Aqui ele abre o arquivo ranking.txt e imprime até o fil do arquivo
void mostrar_rank() {
	FILE *arq;
	arq = fopen("ranking.txt", "rt");
	char c = getc(arq);
	while (c != EOF)
	{
		printf("%c", c);
		c = getc(arq);
	}
	fclose(arq);
	printf("\nTecle [Enter] para voltar ao menu...");
	system("pause>null");
}
// Aqui ele abre o file ranking e sobrescreve o conteudo exitente por NADA
void deletar_rank() {
	char str[20] = "";
	int result;
	FILE *arq;
	arq = fopen("ranking.txt", "w");
	if (arq == NULL) {
		printf("Erro no arquivo\n");
		_getch();
		exit(1);
	}
	result = fputs(str, arq);
	if (result == EOF)
		printf("Erro de escrita\n");

	fclose(arq);
	system("pause");
}
