#include <stdio.h>

int main(){
	int tempo, horas, minutos, segundos;
	scanf("%d", &tempo);
	horas = ((tempo / 60)/60);
	minutos = ((tempo / 60)-(horas * 60));
	segundos = tempo - ((minutos * 60) + ((horas * 60)*60));
	
	printf("%d:%d:%d\n", horas, minutos, segundos);
	
	return 0;
}
