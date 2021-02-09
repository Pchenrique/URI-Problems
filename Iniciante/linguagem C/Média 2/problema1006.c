#include <stdio.h>

int main() {
	double A = 0, B = 0, C = 0, MEDIA = 0;
	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);
	
	MEDIA = ((A * 2)+(B * 3)+(C * 5))/10;
	printf("MEDIA = %.1lf\n", MEDIA);
	return 0;
}
