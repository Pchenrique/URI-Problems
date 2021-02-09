#include <stdio.h>

int main(){
	int i,n,popa,spopa=0,spopb=0,popb,pa,pb,aa=0;
	double taxa, taxb;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		
	
		scanf("%d %d %lf %lf", &popa, &popb, &taxa, &taxb);
		
		while(popa <= popb){
			popa *= (taxa/100.0)+1;
			popb *= (taxb/100.0)+1;
			aa++;
			if(aa>100){
				printf("Mais de 1 seculo.\n");
				break;
			}
		}
		if(aa<=100){
			printf("%d anos.\n", aa);
		}
		aa = 0;
	}	
	return 0;
}
