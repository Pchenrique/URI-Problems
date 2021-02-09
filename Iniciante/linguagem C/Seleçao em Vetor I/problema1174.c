#include <stdio.h>

int main(){
	int i=0;
	double a[100];
	for(i=0; i < 100;){
		scanf("%lf", &a[i]);
		i++;
	}
	for(i=0; i < 100; i++){
		if(a[i] <= 10){
			printf("A[%d] = %.1lf\n", i, a[i]);	
		}	
	}	
	
	return 0;
}
