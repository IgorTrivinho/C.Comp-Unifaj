// ====== BIBLIOTECAS ======
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// ====== PROT�TIPOS ======
void fillVector(int[]);

// ====== MAIN ======
int main()
{
	srand(time(NULL));
	
	int origem[10];
	
}

// ====== FUN��ES ======
void fillVector(int vector[])
{
	for(int i = 0; i < 10; i++) vector[i] = rand();
}
