#include <stdio.h>

int main(){
	int x[10], i;
	for(i = 0; i < 10; i++){
		scanf("%d", &x[i]);
		if(x[i] <= 0){
			x[i] = 1;
		}
	}
	
	i = 0;
	while(i < 10){
		printf("X[%d] = %d\n", i,x[i]);
		i++;
	}
	return 0;
}
