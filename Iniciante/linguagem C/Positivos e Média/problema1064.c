#include <stdio.h>

int main(){
	int i=0,j=0;
	double  n,soma, media;
	
	for(i=0;i<6;i++){
		scanf("%lf", &n);
		if(n > 0){
			soma += n;
			j++;
		}
	}
	media = (soma/j);
	printf("%d valores positivos\n", j);
	printf("%.1lf\n", media);	
	
	return 0;
}
