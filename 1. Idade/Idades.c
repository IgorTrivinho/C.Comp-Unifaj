#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int menor = 0;
	int maior = 0;
	int media = 0;
	int criancas = 0;
	int jovens = 0;
	int adultos = 0;
	
	for(int i = 1; i <= 10; i++){
		
		// ===== LÊ A IDADE =====
		int idade;
		printf("Digite a %dª idade: ", i);
		scanf("%d", &idade);
		printf("\n");
		
		
		// ===== VERIFICA SE O VALOR É VÁLIDO =====
		if (idade < 0 || idade == 0){
			printf("\nDigite um valor válido. (inteiro, positivo e não nulo)\n\n");
			i--;
			continue;
		}
		
		
		// ===== VERIFICA SE A IDADE É A MAIOR OU A MENOR =====
		// ---- na primeira repetição, o maior valor e o menor são iguais ----
		if(i == 1) {
			maior = menor = idade;
			
		}
			
		// ---- após o primeior valor, verifica maior e menor normalmente ----
		else if (idade > maior){
			maior = idade;
			
		}
			
		else if (idade < menor){
			menor = idade;
			
		}	
		
		
		// ===== SOMA A IDADE PARA CALCULAR A MÉDIA ARITMÉTICA =====
		media += idade;
		
		
		// ==== VERIFICA A QUAL GRUPO A IDADE PERTENCE E CONTA 1 ====
		if(idade <= 12){
			criancas++;
			
		} else if (idade > 12 && idade <= 24){
			jovens++;
			
		} else if(idade > 24){
			adultos++;
			
		}
		
	}
	
	media /= 10;
	
	printf("A maior idade é: %d\n", maior);
	printf("A menor idade é: %d\n", menor);
	printf("A média das idades é: %d\n", media);
	printf("Quantidade de Crianças: %d\n", criancas);
	printf("Quantidade de Jovens: %d\n", jovens);
	printf("Quantidade de Adultos: %d\n", adultos);
}
