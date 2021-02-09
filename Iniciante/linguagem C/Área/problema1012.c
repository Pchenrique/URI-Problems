#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(){
	double A, B, C, TR, CIR, QUA, TRA, RE;
	scanf("%lf %lf %lf", &A, &B, &C);
	TR = (A * C)/2;
	CIR = PI * pow(C,2);
	TRA = (C*(A + B))/2;
	QUA = pow(B,2);
	RE = (A * B);
	
	printf("TRIANGULO: %.3lf\n", TR);
	printf("CIRCULO: %.3lf\n", CIR); 
	printf("TRAPEZIO: %.3lf\n", TRA);
	printf("QUADRADO: %.3lf\n", QUA);
	printf("RETANGULO: %.3lf\n", RE);
	
	return 0;
}
