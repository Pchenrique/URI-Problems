#include <stdio.h>

int main (){
 	int i,m,n;// iniciando as variaveis do tipo inteiro. 
	long long int soma, fat[2];// iniciando as variaveis que vai receber os valores dos calculos por isso elas tem q armazena numeros grande dai o tipo 
							   //� long long int.
	
	while(scanf("%d%d", &m, &n)!=EOF){// o while vai fazer essa repeti��o no codigo pedindo o n�mero de entrada dos fatoriais m e n, EOF= � uma condi��o
									  // do sistema para esse while so parar quando o arquivo estiver cheio.
									  
		fat[0]=1;// aqui voc� esta so iniciando o vetor do fatorial com um.
		fat[1]=1;// aqui voc� esta so iniciando o vetor do fatorial com um.
		
		for(i=1; i<=n; i++){// esse for vai percorrer todo o fatorial n e fazer suas multiplica��es e armazenar tudo em fat[0].
			fat[0]=fat[0]*i;// aqui ocorre a multiplica��o de i come�ando de 1 e indo at� o tamanho de n.	
		}
		for(i=1; i<=m; i++){// esse for vai percorrer todo o fatorial n e fazer suas multiplica��es e armazenar tudo em fat[1].
			fat[1]=fat[1]*i;// aqui ocorre a multiplica��o de i come�ando de 1 e indo at� o tamanho de m.
		}
		
		soma=fat[0]+fat[1];//ap�s o resultado dos fatoriais e somo o primeiro com o segundo no caso as duas posi��es do vetor.
		printf("%lld\n", soma);//printo a soma dos vetores(no caso dos vetoriais).
		
	}//fecho o while aqui, ou seja, toda vez que eu entrar com dois numeros no final ele printa e vai pedir mais dois at� a condi��o do while deixar de existir.

	return 0;	
}

