#include <stdio.h>

int main(){
	int idade, anos, meses, meses1, anos1, dias;
	scanf("%d", &idade);
	anos = idade/365;
	anos1 = idade%365; 
	meses = anos1/30; 
	meses1 = anos1%30; 
	dias = meses1; 
	
	printf("%d ano(s)\n", anos);
	printf("%d mes(es)\n", meses);
	printf("%d dia(s)\n", dias);
	return 0;
}
