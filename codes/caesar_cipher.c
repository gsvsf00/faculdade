#include <stdio.h>
#include <stdlib.h>

char crip[50],aux;
int i;

void frase() {
	printf("Enter a String:\t");
	scanf("%[^\n]s", crip);
}

void criptografar(){
	
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
		printf("Descriptado: %s", &crip);
}*/

void descriptografar(){

		for(i = 0; crip[i] != '\0'; ++i){
		aux = crip[i];
		
		if(aux >= 'a' && aux <= 'z'){
			aux = aux - 3;
			
			if(aux > 'z'){
				aux = aux - 'z' + 'a' - 1;
			}
			crip[i] = aux;
		}
		else if(aux >= 'A' && aux <= 'Z'){
			aux = aux - 3;			
			if(aux > 'Z'){
				aux = aux - 'Z' + 'A' - 1;
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
	}
	return 0;
}
