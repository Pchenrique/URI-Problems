#include <stdio.h>

int main(){
	int x,y,i,j,n=0,soma;
	
	scanf("%d ", &n );
	for(i=1;i<=n;i++){
		
		scanf("%d %d", &x, &y);
		if(x%2 == 0){
		x += 1;
		}else if(x%2==1){
		x = x;
		}
		
		for(j=0;j<y;j++){
			soma = soma + x;
			x = x + 2;
		}
		printf("%d\n", soma);
		soma = 0;
	}
	
	return 0;
}
