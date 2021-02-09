#include <stdio.h>

int main(){
	int n,i, valor;
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		scanf("%d", &valor);
		if(valor == 0){
			printf("NULL\n");	
		}else if(valor%2==0){
			if(valor > 0){
				printf("EVEN POSITIVE\n");
			}else{
				printf("EVEN NEGATIVE\n");
			}
		}else if((valor%2==1)||(valor%2==-1)){
			if(valor > 0){
				printf("ODD POSITIVE\n");
			}else{
				printf("ODD NEGATIVE\n");
			}
		}	
	}
	return 0;
}
