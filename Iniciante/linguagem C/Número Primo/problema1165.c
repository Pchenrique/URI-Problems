#include <stdio.h>

int main(){
	int n,i,num,j;	
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d",&num);
		for(j = num ;j > 0; j--){
			if(num%j==0 && j != num || num == 1){
				printf("%d nao eh primo\n", num);
				break;
			}else if( j == 2){
				printf("%d eh primo\n", num);
				break;
			}
		}
	}
	return 0;
}
