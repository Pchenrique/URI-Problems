#include <stdio.h>

int main(){
	
	int ant=1, ant2=0, i, n, r;
	scanf("%d", &n);
	if(n == 0){
		printf("");
	}else if(n == 1){
		printf("0");
	}else if(n == 2){
		printf("0 1");	
	}else{
		printf("0 1");
		for(i = 2; i < n; i++){
		r = ant+ ant2;
		printf(" %d", r);
		ant2 = ant;
		ant = r;
		}
	}
	printf("\n");
	return 0;
}
