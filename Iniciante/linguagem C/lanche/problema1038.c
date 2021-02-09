#include <stdio.h>

int main(){
	int cod, qnt;
	double valor;
	scanf("%d %d", &cod, &qnt);
	
	switch(cod){
		case 1: 
			valor = (qnt * 4.00);
		break;
		case 2: 
			valor = (qnt * 4.50);
		break;
		case 3: 
			valor = (qnt * 5.00);
		break;
		case 4: 
			valor = (qnt * 2.00);
		break;
		case 5: 
			valor = (qnt * 1.50);
		break;
	}
	printf("Total: R$ %.2lf\n", valor);
	return 0;
}
