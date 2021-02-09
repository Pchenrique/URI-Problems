#include <stdio.h>

int main(){
	
	int x=0, y=0, i=0;
	
	scanf("%d", &x);
	scanf("%d", &y);
	
	if(x < y){
		for(i=x+1; i<y; i++){
			if(i%5==2 || i%5==3){
				printf("%d\n", i);
			}
		}
	}else if(y < x){
		for(i=y+1; i<x; i++){
			if(i%5==2 || i%5==3){
				printf("%d\n", i);
			}
		}	
	}
	
	return 0;
}
