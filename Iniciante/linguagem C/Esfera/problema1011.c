#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(){
	double R, VOLUME;
	scanf("%lf", &R);
	
	VOLUME = (4/3.0)*PI*pow(R,3);
	printf("VOLUME = %.3lf\n", VOLUME);
	return 0;
}
