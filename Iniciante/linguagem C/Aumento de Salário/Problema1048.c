#include <stdio.h>

int main(){
	int por;
	double salario, bonus;
	scanf("%lf", &salario);
	
	if((salario >=0)&&(salario <= 400.00)){
		por = 15;
		bonus = (salario*0.15);
		salario = salario + bonus;
	}else if((salario >=400.01)&&(salario <= 800.00)){
		por = 12;
		bonus = (salario*0.12);
		salario = salario + bonus;
	}else if((salario >=800.01)&&(salario <= 1200.00)){
		por = 10;
		bonus = (salario*0.10);
		salario = salario + bonus;
	}else if((salario >=1200.01)&&(salario <= 2000.00)){
		por = 7;
		bonus = (salario*0.07);
		salario = salario + bonus;
	}else if(salario > 2000){
		por = 4;
		bonus = (salario*0.04);
		salario = salario + bonus;
	}
	printf("Novo salario: %.2lf\n", salario);
	printf("Reajuste ganho: %.2lf\n", bonus);
	printf("Em percentual: %d %%\n", por);
	
	return 0;
}
