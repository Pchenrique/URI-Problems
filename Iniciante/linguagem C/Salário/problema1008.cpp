#include <stdio.h>

int main() {
	int NF, HT;
	float VH, SALARY;
	scanf("%d", &NF);
	scanf("%d", &HT);
	scanf("%f", &VH);
	
	SALARY = (VH *HT);
	printf("NUMBER = %d\n", NF);
	printf("SALARY = U$ %.2f\n", SALARY);
	return 0;
}
