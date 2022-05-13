// ====== BIBLIOTECAS ======
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// ====== PROTÓTIPOS ======
void fillVector(int[]);

// ====== MAIN ======
int main()
{
	srand(time(NULL));
	
	int origem[10];
	
}

// ====== FUNÇÕES ======
void fillVector(int vector[])
{
	for(int i = 0; i < 10; i++) vector[i] = rand();
}
