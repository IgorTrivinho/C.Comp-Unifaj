#include <stdio.h>

int main(){

	int valorDecimal, valorOctal = 0, i = 1;
	printf("Digite um valor em decimal para converte-lo em octal: ");
	scanf("%d", &valorDecimal);
	
	while(valorDecimal != 0){	
	
		valorOctal += (valorDecimal%8)*i;
		valorDecimal /= 8;
		
		i *= 10;
		
	}
	
	printf("%d", valorOctal);
}
