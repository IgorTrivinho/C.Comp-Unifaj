#include <stdio.h>

int main(){
	
	int n;
	printf("Digite um numero: ");
	scanf("%d", &n);
	printf("\n");
	
	for(int i = 1; i<=n; i++){
		if(n%i == 0){
			printf("%d\n", i);
		}
	}
}
