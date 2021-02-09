#include <stdio.h>

int main(){
	int n=1,j;
	
	while(n != 0){
		scanf("%d", &n);
		
	    for(j=1;j<=n;j++){
	    	printf("%d", j);
	    	
	    	if(j < n){
	    		printf(" ");
			}else if(j == n){
				printf("\n");
			}
		}
	}
	return 0;
}
