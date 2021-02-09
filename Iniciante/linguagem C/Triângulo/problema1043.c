#include <stdio.h>

int main(){
	double a,b,c, per, area;
	
	scanf("%lf%lf%lf", &a, &b, &c);
	
	if((a < (b+c))&&(b < (a+c))&&(c < (a+b))){
		per = (a+b+c);
		printf("Perimetro = %.1lf\n", per);
	}else{
		area = ((a+b)*c)/2;
		printf("Area = %.1lf\n", area);
	}
	return 0;
}
