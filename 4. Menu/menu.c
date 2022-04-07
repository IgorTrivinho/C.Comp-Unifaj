#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("a. Cadastro\n");
	printf("b. Listagem\n");
	printf("c. Relatórios\n");
	printf("d. Sair\n\n");
	
	int opcao;
	printf("Digite a sua opção: ");
	scanf("%c", &opcao);
	printf("\n\n");
	
	switch(opcao){
		case 'a':
			printf("Página de casatro\n");
			break;
			
		case 'b':
			printf("Página de Listagem\n");
			break;
			
		case 'c':
			printf("Página de Relatórios\n");
			break;
			
		case 'd':
			printf("Saindo...\n");
			break;
			
		default:
			printf("Opção inválida.\n");
	}
}
