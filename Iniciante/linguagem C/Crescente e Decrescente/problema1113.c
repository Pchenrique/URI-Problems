#include <stdio.h>

int main(){
	int n,x,y,i;
	do{
		scanf("%d%d", &x, &y);
		if(x == y){
			break;
		}else if(x<y){
			printf("Crescente\n");
		}else if(x>y){
			printf("Decrescente\n");
		}
	}while(x != y);
	return 0;
}
