#include <stdio.h>

int main(){
	int n,i=2,resultado;
	scanf("%d", &n);
	
	for(i=2;i<=n;i++){
		if((n>5)&&(n<2000)&&(i%2==0)){
			resultado = (i*i);
			printf("%d^2 = %d\n",i,resultado);
		}
	}
	return 0;
}
