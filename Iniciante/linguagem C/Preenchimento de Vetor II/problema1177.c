#include <stdio.h>

int main(){
	int i,p, n[1000],j=0;
	scanf("%d", &p);
	for(i=0;i<1000;i++){
		
		if(j < p){
			printf("N[%d] = %d\n", i, j);
		}else if(j == p){
			j = 0;
			printf("N[%d] = %d\n", i, j);
		}
		j++;
	}
	return 0;
}
