#include <stdio.h>

int main(){
	int n,cont=1,valor,soma=0, divisor;
	scanf("%d", &n);
	while(cont <= n){
		scanf("%d", &valor);
		divisor = valor;
		while(divisor >= 1){
			if(valor % divisor == 0){
				soma = soma + divisor;	
			}
			divisor--;
		}
		soma = (soma-valor);
		if(soma == valor){
			printf("%d eh perfeito\n", valor);
		}else{
			printf("%d nao eh perfeito\n", valor);
		}
		soma = 0;
		
		cont++;
	}
	return 0;
}
