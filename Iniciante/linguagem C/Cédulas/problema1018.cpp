#include <stdio.h>

int main(){
	int valor,valor100, valor50, valor20, valor10, valor5, valor2, valor1, imp;
	scanf("%d", &valor);
	imp = valor;
	valor100 = valor / 100; 
	valor =  valor % 100 ; 
	valor50 = valor / 50; 
	valor = valor % 50; 
	valor20 = valor / 20; 
	valor = valor % 20;
	valor10 = valor / 10;
	valor = valor % 10; 
	valor5 = valor / 5; 
	valor = valor % 5; 
	valor2 = valor / 2;
	valor = valor % 2; 
	valor1 = valor / 1;
	valor = valor % 1;
	
	printf("%d\n", imp);
	printf("%d nota(s) de R$ 100,00\n", valor100);
	printf("%d nota(s) de R$ 50,00\n", valor50);
	printf("%d nota(s) de R$ 20,00\n", valor20);
	printf("%d nota(s) de R$ 10,00\n", valor10);
	printf("%d nota(s) de R$ 5,00\n", valor5);
	printf("%d nota(s) de R$ 2,00\n", valor2);
	printf("%d nota(s) de R$ 1,00\n", valor1);
	return 0;
}
