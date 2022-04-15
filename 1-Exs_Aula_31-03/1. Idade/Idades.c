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
		
		// ===== L� A IDADE =====
		int idade;
		printf("Digite a %d� idade: ", i);
		scanf("%d", &idade);
		printf("\n");
		
		
		// ===== VERIFICA SE O VALOR � V�LIDO =====
		if (idade < 0 || idade == 0){
			printf("\nDigite um valor v�lido. (inteiro, positivo e n�o nulo)\n\n");
			i--;
			continue;
		}
		
		
		// ===== VERIFICA SE A IDADE � A MAIOR OU A MENOR =====
		// ---- na primeira repeti��o, o maior valor e o menor s�o iguais ----
		if(i == 1) {
			maior = menor = idade;
			
		}
			
		// ---- ap�s o primeior valor, verifica maior e menor normalmente ----
		else if (idade > maior){
			maior = idade;
			
		}
			
		else if (idade < menor){
			menor = idade;
			
		}	
		
		
		// ===== SOMA A IDADE PARA CALCULAR A M�DIA ARITM�TICA =====
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
	
	printf("A maior idade �: %d\n", maior);
	printf("A menor idade �: %d\n", menor);
	printf("A m�dia das idades �: %d\n", media);
	printf("Quantidade de Crian�as: %d\n", criancas);
	printf("Quantidade de Jovens: %d\n", jovens);
	printf("Quantidade de Adultos: %d\n", adultos);
}
