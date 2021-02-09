#include <stdio.h>

int main(){
	int n,i,p=0,nn=0,par=0,impar=0;
	for(i=1; i<=5; i++){
		scanf("%d", &n);
		
		
		if(n > 0){
			p++;
		}else if(n < 0){
			nn++;
		}
		
		if(n%2==0){
			par++;
		}else if(n%2!=0){
			impar++;
		}	
	}
	printf("%d valor(es) par(es)\n", par);
	printf("%d valor(es) impar(es)\n", impar);
	printf("%d valor(es) positivo(s)\n", p);
	printf("%d valor(es) negativo(s)\n", nn);

	return 0;
}

