#include <stdio.h>

int main(){
	int i=1;
	while(i <= 100){
		if((i%2==0)&&(i != 1)){
			printf("%d\n", i);
		}
		i++;
	}
	return 0;
}
