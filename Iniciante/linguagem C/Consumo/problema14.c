#include <stdio.h>

int main(){

	double x,y,consumo;
	scanf("%lf", &x);
	scanf("%lf", &y);
	consumo = (x/y);
	
	printf("%.3lf km/l\n", consumo);
	return 0;
}
