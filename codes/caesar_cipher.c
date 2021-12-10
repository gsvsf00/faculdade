#include <stdio.h>
<<<<<<< HEAD
<<<<<<< HEAD
=======

void criptografar();
void descriptografar();
void teste(){
	printf("Teste");
}
int main()
{
	int op;
	printf("Digite a opcao:\n\n1- Criptografar\n2-Descriptografar\n\n");
	scanf ("%d", &op);
	switch (op)
	{
	case 1:
		criptografar();
	break;
	case 2:
		descriptografar();
	break;
	case 3:
		teste();
	break;
>>>>>>> cc67c42 (Update)

int criptar(){
    int i;
    char message[100];
    message = getchar();
=======
#include <stdlib.h>

char crip[50],aux;
int i;

void frase() {
	printf("Enter a String:\t");
	fflush(stdin);
	scanf("%[^\n]s", crip);
>>>>>>> 90649fa (Update)
}

<<<<<<< HEAD
int main()
{
	char message[100], ch;
	int i, key;
	
	printf("Enter a message to encrypt: ");
	gets(message);
	printf("Enter key: ");
	scanf("%d", &key);
=======
void criptografar(){
<<<<<<< HEAD
	char crip[100], aux;
	int i;
	
	printf("Digite: ");
		gets(crip);
>>>>>>> cc67c42 (Update)
=======
>>>>>>> 90649fa (Update)
	
		for(i = 0; crip[i] != '\0'; ++i){
		aux = crip[i];
		
		if(aux >= 'a' && aux <= 'z'){
			aux = aux + 3;
			
			if(aux > 'z'){
				aux = aux - 'z' + 'a' - 1;
			}
			crip[i] = aux;
		}
		else if(aux >= 'A' && aux <= 'Z'){
			aux = aux + 3;			
			if(aux > 'Z'){
				aux = aux - 'Z' + 'A' - 1;
			}
			crip[i] = aux;
		}
	}
		printf("Criptado: %s", crip);
}
/*void descriptografar(char crip[]){
	char aux;
	int i;
	
		for(i = 0; crip[i] != '\0'; ++i){
		aux = crip[i];
		
		if(aux >= 'a' && aux <= 'z'){
			aux = aux - 3;
			
			if(aux > 'z'){
				aux = aux - 'z' - 'a' + 1;
			}
			
			crip[i] = aux;
		}
		else if(aux >= 'A' && aux <= 'Z'){
			aux = aux - 3;
			
			if(aux > 'Z'){
				aux = aux - 'Z' - 'A' + 1;
			}
			
			crip[i] = aux;
		}
	}
<<<<<<< HEAD
		printf("Criptado: %s", crip);
=======
		printf("Descriptado: %s", &crip);
}*/

void descriptografar(){

		for(i = 0; crip[i] != '\0'; ++i){
		aux = crip[i];
		
		if(aux >= 'a' && aux <= 'z'){
			aux = aux - 3;
			
			if(aux < 'a'){
				aux = aux + 'z' - 'a' + 1;
			}
			crip[i] = aux;
		}
		else if(aux >= 'A' && aux <= 'Z'){
			aux = aux - 3;			
			if(aux < 'A'){
				aux = aux + 'Z' - 'A' + 1;
			}
			crip[i] = aux;
		}
	}
		printf("Descriptado: %s", crip);
}

int main()
{
	int op;
	frase();
	
	while (1){
<<<<<<< HEAD
	printf("Digite a opcao:\n\n1- Criptografar\n2-Descriptografar\n3-Sair\n");
	scanf ("%d", &op);
	switch (op){
	case 1:
		criptografar();
	break;
	case 2:
		descriptografar();
	break;
	case 3:
			exit(0);
	default:
		printf ("Valor invalido!\n");
	break;
		}
=======
    	printf("\nDigite a opcao:\n\n1- Criptografar\n2-Descriptografar\n3-Sair\n");
    	scanf ("%d", &op);
    	switch (op){
    	case 1:
    		criptografar();
    	break;
    	case 2:
    		descriptografar();
    	break;
    	case 3:
    			exit(0);
    	default:
    		printf ("Valor invalido!\n");
    	break;
    		}
>>>>>>> 2c1f3f4 (up)
	}
	return 0;
<<<<<<< HEAD
>>>>>>> 90649fa (Update)
}
=======
}
>>>>>>> 2875a9e (up)
