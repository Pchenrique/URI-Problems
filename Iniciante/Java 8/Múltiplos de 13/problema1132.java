import java.io.IOException;
import java.util.Scanner;
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner entrada = new Scanner(System.in);
        int x, y, i=0, soma=0;
        
        x = entrada.nextInt();
        y = entrada.nextInt();
        
        if(x < y) {
        	for(i=x; i <= y; i++) {
        		if(i%13==0){
        			 
        		}else{
        			soma = soma + i;
        		}
        	}
        	System.out.println(soma);
        }else{
        	for(i=y; i <= x; i++) {
        		if(i%13==0){
        		
        		}else{
        			soma = soma + i;
        		}
        	}
        	System.out.println(soma);
        }
 
    }
 
}