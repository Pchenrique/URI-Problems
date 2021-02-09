#include <stdio.h>
 
int main() {
 
    double l;
    double valor100, valor50, valor20, valor10, valor5, valor2, valor1, valor050, valor025, valor010, valor005;
    int valor;
    scanf("%lf",&l);
    valor = l*100;
    
    valor100 = valor/10000;
    valor = valor%10000;
    
    valor50 = valor/5000;
    valor = valor%5000;
    
    valor20 = valor/2000;
    valor = valor%2000;
    
    valor10 = valor/1000;
    valor = valor%1000;
    
    valor5 = valor/500;
    valor = valor%500;
    
    valor2 = valor/200;
    valor = valor%200;
    
    valor1 = valor/100;
    valor = valor%100;
    
    valor050 = valor/50;
    valor = valor%50;
    
    valor025 = valor/25;
    valor = valor%25;
    
    valor010 = valor/10;
    valor = valor%10;
    valor005 = valor/5;
    valor = valor%5;
    
    printf("NOTAS:\n");
    printf("%.0lf nota(s) de R$ 100.00\n",valor100);
    printf("%.0lf nota(s) de R$ 50.00\n",valor50);
    printf("%.0lf nota(s) de R$ 20.00\n",valor20);
    printf("%.0lf nota(s) de R$ 10.00\n",valor10);
    printf("%.0lf nota(s) de R$ 5.00\n",valor5);
    printf("%.0lf nota(s) de R$ 2.00\n",valor2);
    printf("MOEDAS:\n");
    printf("%.0lf moeda(s) de R$ 1.00\n",valor1);
    printf("%.0lf moeda(s) de R$ 0.50\n",valor050);
    printf("%.0lf moeda(s) de R$ 0.25\n",valor025);
    printf("%.0lf moeda(s) de R$ 0.10\n",valor010);
    printf("%.0lf moeda(s) de R$ 0.05\n",valor005);
    printf("%d moeda(s) de R$ 0.01\n",valor);
 
    return 0;
}
