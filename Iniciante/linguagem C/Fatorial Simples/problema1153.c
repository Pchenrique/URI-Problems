#include <stdio.h>
 
int main(){
	int fator=1, n;
	scanf("%d", &n);
	while(n >= 1){
		fator = fator * n;
		n--;
	}
	printf("%d\n", fator);
return 0;
}
