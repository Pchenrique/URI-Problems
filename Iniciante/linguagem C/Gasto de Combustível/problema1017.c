#include <stdio.h>

int main(){
	int tempo,velocidade;
	double distancia, custo;
	scanf("%d", &tempo);
	scanf("%d", &velocidade);
	
	distancia = (tempo * velocidade);
	
	custo = (distancia / 12);
	
	printf("%.3lf\n", custo);
	return 0;
}
