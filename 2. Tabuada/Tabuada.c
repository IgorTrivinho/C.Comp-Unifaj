#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int jogo = 1;
	
	printf("====================================\n");
	printf("||      TABUADA DO TRIVINHO       ||\n");
	printf("====================================\n\n");
	
	do{
		
		int tabuada;
		printf("Digite qual tabuada você quer: ");
		scanf("%d", &tabuada);
		printf("\n");
		
		for(int multiplicador = 1; multiplicador <= 10; multiplicador++){
			int produto = tabuada * multiplicador;
			printf("%d x %2d = %2d\n", tabuada, multiplicador, produto);
		}
		
		int respErrada = 0;
		do{	
			char dnv;
			printf("\n");
			printf("Deseja outra tabuada? [S]/[N] ");
			scanf(" %c", &dnv);
			
			respErrada = 0;
			
			switch(dnv){
				case 'S':
					jogo = 1;
					break;
					
				case 'N':
					jogo = 0;
					break;
					
				default:
					respErrada = 1;
					printf("Digite um valor válido\n");
					break;
			}
		
		}while(respErrada);
				
		printf("\n");
		
	} while(jogo);
	
	printf("Encerrando o gerador de tabuada, obrigado por usar.\n\n");
	
	
	
	
}
