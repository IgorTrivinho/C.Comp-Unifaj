#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("a. Cadastro\n");
	printf("b. Listagem\n");
	printf("c. Relat�rios\n");
	printf("d. Sair\n\n");
	
	int opcao;
	printf("Digite a sua op��o: ");
	scanf("%c", &opcao);
	printf("\n\n");
	
	switch(opcao){
		case 'a':
			printf("P�gina de casatro\n");
			break;
			
		case 'b':
			printf("P�gina de Listagem\n");
			break;
			
		case 'c':
			printf("P�gina de Relat�rios\n");
			break;
			
		case 'd':
			printf("Saindo...\n");
			break;
			
		default:
			printf("Op��o inv�lida.\n");
	}
}
