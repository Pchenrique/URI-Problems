#include <stdio.h>

int main(){
	int n[10], i=0, num;
	scanf("%d", &num);
	
	while(i < 10){
		if(i == 0){
			n[i] =num;
		} else {
			n[i] = n[i-1]*2;
		}
		
		printf("N[%d] = %d\n", i, n[i]);
		i++;
	}
	
	return 0;
}
