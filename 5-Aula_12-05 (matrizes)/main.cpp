// ======BIBLIOTECAS ======
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// ====== CONSTANTES ======
#define HEIGHT 30
#define LENGTH 30

// ====== PROTÓTIPOS ======
void fillTable(char table)
void printTable(char table[][HEIGHT]);

// ====== MAIN ======
int main()
{
	srand(time(NULL));
	int n = rand() % 100;
	
	char gameTable[LENGTH][HEIGHT] = {'#'};
	
	printTable(gameTable);
	
}

// ====== FUNÇÕES ======
void printTable(char table[][HEIGHT])
{	
	for(int y = 0; y < LENGTH; y++)
	{
		for(int x = 0; x < HEIGHT; x++)
		{
			if(x == 0) printf("%2d   ", y);
			
			printf("%c", table[x][y]);
			
		}
		printf("\n");
	}
	
}
