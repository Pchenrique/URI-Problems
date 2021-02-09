#include <stdio.h>
#include <math.h>

int main(){
	int A, B, C, MAIOR;
	scanf("%d %d %d", &A, &B, &C);
	MAIOR = (A + B + abs(A-B))/2;
	MAIOR = (MAIOR + C + abs(MAIOR-C))/2;
	
	
	printf("%d eh o maior\n", MAIOR);
	return 0;	
}
