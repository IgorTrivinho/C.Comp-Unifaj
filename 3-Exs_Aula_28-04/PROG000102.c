#include <stdio.h>

// ===== PROTÓTIPOS DE FUNÇÕES =====
void prints(char[], short);
int* mediaIdades(int);

// ===== MAIN =====
int main(){
	int idadesQtd;
	printf("Digite a quantidade de idades a serem calculadas: ");
	scanf("%d", &idadesQtd);
	prints("-", 2);
	
	mediaIdades(idadesQtd);
	

} // fecha main

// ===== FUNÇÕES =====
void prints(char shape[], short qtd) {
	for(int i = 0; i < qtd; i++){
		if(shape == "ln") printf("%d.. \n", i); else printf("%c..", shape);
	}
	
	
	
} // fecha prints()

int* mediaIdades(int qtd){
	int media = 0;
	
	for(int i = 0; i < qtd; i++){
		int idade;
		printf("Digite a idade %d: ", i);
		scanf("%d", &idade);
		prints("nl", 1);
		
		media += idade;
	}
	prints("nl", 1);
	
	printf("%d", media);
	
	return &media;
	
} // fecha mediaIdades()
