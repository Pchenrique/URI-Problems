#include <stdio.h>

int main(){ 
	int n,cont=1;
	scanf("%d", &n);
	while(cont <= n){
		if(n % cont == 0){
			printf("%d\n",cont);
		}
		cont++;
	}
	return 0;
}
