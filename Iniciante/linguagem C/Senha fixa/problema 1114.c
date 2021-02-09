#include <stdio.h>

int main(){
	
	int senha=0, validade=0;
	
	while(validade==0){
		scanf("%d", &senha);
		
		if(senha == 2002){
			printf("Acesso Permitido\n");
			validade=1;	
		}else{
			printf("Senha Invalida\n");
		}	
	}
	
	return 0;
}
