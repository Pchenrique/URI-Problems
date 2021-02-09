#include <stdio.h>

int main(){
	int i, soma=0;
	double valor;
	for(i=1; i <= 6; i++){
		scanf("%lf", &valor);
		if(valor > 0){
			soma++;
		}	
	}
	printf("%d valores positivos\n", soma);
	return 0;
}
