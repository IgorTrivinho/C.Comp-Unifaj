#include <stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");
	
	int media = 0;
	int n = 0;
	int i = 1;
	
	printf("Digite quantos valores voc� quer: ");
	scanf("%d", &n);
	printf("\n");
	
	
	do {		
		int valor;
		printf("Digite o %d� valor: ", i);
		scanf("%d", &valor);
		printf("\n");
		
		media += valor;
		
		i++;
		
	} while(i <= n);
	
	media /= n;
	
	printf("O m�dulo da m�dia �: %d", media);

}
