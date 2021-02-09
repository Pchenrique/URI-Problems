#include <stdio.h>

int main(){ 
	int idade,cont=0;
	float media, somaidade=0;
	
	do{
		scanf("%d", &idade);
		if(idade >= 0){
			cont++;
			somaidade += idade;
		}else{
			break;
		}
	}while(idade >= 0);
	media = (somaidade / cont);
	printf("%.2f\n", media);
	
	return 0;
}
