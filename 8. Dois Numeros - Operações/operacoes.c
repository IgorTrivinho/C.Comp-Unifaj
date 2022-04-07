#include <stdio.h>
#include <locale.h>
#include <math.h>

#define PI 3.14159265359

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float num1;
	printf("Digite o primeiro numero: ");
	scanf("%f", &num1);
	printf("\n");
	
	float num2;
	printf("Digite o segundo numero: ");
	scanf("%f", &num2);
	printf("\n\n");
	
	printf("A. A soma entre %.2f e %.2f é: %.2f\n\n", num1, num2, num1+num2);
	
	printf("B. O produto de %.2f pelo quadrado de %.2f\n", num1, num2);
	printf("a x b²\n");
	printf("%.2f x %.2f²\n", num1, num2);
	printf("%.2f x %.2f\n", num1, num2*num2);
	printf("%.2f\n\n", num1*num2*num2);
	
	printf("C. O quadrado de %.2f é: %.2f\n\n", num1, num1*num1);
	
	printf("D. A raiz quadrada da soma dos quadrados: \n");
	printf("v( %.2f² + %.2f² ) = %.2f\n\n", num1, num2, sqrt((num1*num1)+(num2*num2)));
	
	float anguloGraus = num1-num2;
	float anguloRad   = anguloGraus * (PI/180);
	printf("E. O seno da diferença do primeiro número pelo segundo\n");
	printf("seno(%.2f - %.2f) = %.2f\n\n", num1, num2, sin(anguloRad));
	
	float modulo = num1;
	if(num1 < 0.0){
		modulo = -num1;
	}
	
	printf("F. O módulo do primeiro número é: ");
	printf("%.2f\n\n", modulo);
	
}
