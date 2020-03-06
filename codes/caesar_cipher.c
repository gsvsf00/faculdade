#include <stdio.h>

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

	default:
		printf ("Valor invalido!\n");
	break;
	}

	return 0;
}

void criptografar(){
	char crip[100], aux;
	int i;

	printf("Digite: ");
		gets(crip);
	
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
void descriptografar(){
	char crip[100], aux;
	int i;

	printf("Digite: ");
		gets(crip);
	
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
		printf("Criptado: %s", crip);
}