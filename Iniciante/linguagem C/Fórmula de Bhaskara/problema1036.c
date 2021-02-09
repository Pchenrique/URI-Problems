#include <stdio.h>
#include <math.h>

int main(){
	double a,b,c,vraiz,raiz,r1,r2;
	scanf("%lf %lf %lf", &a, &b, &c);
	vraiz = (pow(b,2)-(4 * a * c));
	raiz = sqrt(vraiz);
	r1 = ((0 - b)+raiz)/(2*a);
	r2 = ((0 - b)-raiz)/(2*a);
	
	if((vraiz < 0) || (a == 0)){
		printf("Impossivel calcular\n");		
	}else{
		printf("R1 = %.5lf\n", r1);
		printf("R2 = %.5lf\n", r2);	
	}
	return 0;
}
