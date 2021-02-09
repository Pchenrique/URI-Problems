#include <stdio.h>

int main(){
	int n,i,resultado;
	scanf("%d", &n);
	
	for(i=1;i<=10;i++){
		resultado = i * n;
		printf("%d x %d = %d\n", i, n, resultado);
	}
	return 0;
}
