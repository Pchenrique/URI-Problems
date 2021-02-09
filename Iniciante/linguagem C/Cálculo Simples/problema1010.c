#include <stdio.h>

int main(){
	int CP, QP;
	float V, TOTAL, VALOR1, VALOR2;
	
	scanf("%d %d %f", &CP, &QP, &V);
	VALOR1 = (QP * V);
	scanf("%d %d %f", &CP, &QP, &V);
	VALOR2 = (QP * V);
	
	TOTAL = (VALOR1 + VALOR2);
	printf("VALOR A PAGAR: R$ %.2f\n",TOTAL);
	return 0;
}
