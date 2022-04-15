#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int valorUsuario = 0,
		resultDiv;
	
	printf("Digite um valor a ser convertido: ");
	scanf("%d", &valorUsuario);
	printf("\n");
	
	for(int i=0; i<2; i++){
		int resto = 0,
			valorConv = 0,
			resultDiv = valorUsuario,
			base,
			mult = 1;
		
		if(i==0) base = 2;
		else     base = 8;		
			
		while(resultDiv != 0){
			resto = resultDiv % base;
			resultDiv /= base;
			
			valorConv += resto * mult;
			
			mult *= 10;
		}
		
		printf("O valor %d convertido para a base %d é %d\n", valorUsuario, base, valorConv);
	}
}
