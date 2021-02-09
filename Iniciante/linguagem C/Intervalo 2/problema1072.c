#include <stdio.h>

int main(){
	int n,i,valor,cont=0,fora=0;
	
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		scanf("%d", &valor);
		
		if((valor >= 10)&&(valor <= 20)){
			cont++;
		}else{
			fora++;	
		}
		
	}
	printf("%d in\n", cont);
	printf("%d out\n", fora);
	
	return 0;
}
