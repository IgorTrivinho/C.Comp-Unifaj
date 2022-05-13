// ======BIBLIOTECAS ======
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// ====== CONSTANTES ======
#define HEIGHT 30
#define WIDTH 30

// ====== PROTÓTIPOS ======
void fillTable(char table[WIDTH][HEIGHT], char character);
void printTable(char table[WIDTH][HEIGHT]);

// ====== MAIN ======
int main()
{
	srand(time(NULL));
	int n = rand() % 100;
	
	char gameTable[WIDTH][HEIGHT] = {'#'};
	
	fillTable(gameTable, '#');
	printTable(gameTable);
	
}

// ====== FUNÇÕES ======
void printTable(char table[WIDTH][HEIGHT])
{	
	for(int y = 0; y < WIDTH; y++)
	{
		for(int x = 0; x < HEIGHT; x++)
		{
			if(x == 0) printf("%2d   ", y);
			
			printf("%c", table[x][y]);
			
		}
		printf("\n");
	}
}

void fillTable(char table[WIDTH][HEIGHT], char character)
{
	for(int y = 0; y < WIDTH; y++)
	{
		for(int x = 0; x < HEIGHT; x++)
		{			
			table[x][y] = character;
		}
		printf("\n");
	}
}
