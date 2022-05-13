#include <stdio.h>

int main(){
	for(int n = 1; n <= 100; n++){
		if(n % 2 == 0)  printf("%3d ", n);
		if(n % 10 == 0) printf("\n");
	}
}
