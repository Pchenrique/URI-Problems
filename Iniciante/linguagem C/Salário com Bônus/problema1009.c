#include <stdio.h>

int main() {
	char NOME [10];
	double SF, CV, TOTAL;
	scanf("%s", &NOME);
	scanf("%lf", &SF);
	scanf("%lf", &CV);
	
	TOTAL =  SF + (CV * 0.15);
	printf("TOTAL = R$ %.2lf\n", TOTAL);
	return 0;
}
