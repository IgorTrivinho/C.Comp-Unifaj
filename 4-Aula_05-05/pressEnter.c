// ===== IMPORTA��ES =====
#include <stdio.h>

// ===== PROT�TIPOS =====
void esperaEnter();

// ===== MAIN =====
int main ()
{
	esperaEnter();
	
	return 0;
}

// ===== FUN��ES =====
void esperaEnter()
{
	int tecla;
	printf("Pressione ENTER\n");
	
	do
	{
		tecla = getchar();
	
		if(tecla == 13 || tecla == 10)
		{	
			printf("ENTER pressionado!\n");
		}		
	
	}while(tecla != 10 && tecla != 13);
}
