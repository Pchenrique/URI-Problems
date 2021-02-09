#include <stdio.h>

int main(){

    int cont, vetor_total[3], vetor_acerto[3], i;
     
    double soma_s = 0.00, soma_b = 0.00, soma_a = 0.00;
    
    double soma_s1 = 0.00, soma_b1 = 0.00, soma_a1 = 0.00;
    
    double somaGeral_s, somaGeral_b, somaGeral_a;
    
    char nome[10000];
    
    scanf("%d", &cont);
     
    for(i=0; i<cont; i++){
    	
        scanf("%s", nome);
        
        scanf("%d%d%d", &vetor_total[0], &vetor_total[1], &vetor_total[2]);
        scanf("%d%d%d", &vetor_acerto[0], &vetor_acerto[1], &vetor_acerto[2]);
        
        soma_s += vetor_total[0]; 
		soma_b += vetor_total[1]; 
		soma_a += vetor_total[2];
		
		soma_s1 += vetor_acerto[0]; 
		soma_b1 += vetor_acerto[1]; 
		soma_a1 += vetor_acerto[2];
    }
     
    somaGeral_s = (soma_s1*100.00)/soma_s;
    somaGeral_b = (soma_b1*100.00)/soma_b;
    somaGeral_a = (soma_a1*100.00)/soma_a;
    
    printf("Pontos de Saque: %.2lf %%.\n", somaGeral_s);
    printf("Pontos de Bloqueio: %.2lf %%.\n", somaGeral_b);
    printf("Pontos de Ataque: %.2lf %%.\n", somaGeral_a);
    
    return 0;
}
