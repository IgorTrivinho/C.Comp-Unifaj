#include <stdio.h>

int main(){
	for(int n = 1; n <= 50; n++){
		printf("%2d  ", n);
		
		if(n % 10 == 0){
			printf("\n");
		}
	}
}
