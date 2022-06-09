#include <stdio.h>
#include <locale.h>





int n1,n2,n3;

int dados()
{

	
	

	
	printf("Digite o 1º Número : ");
	scanf("%d", &n1);
	
	printf("Digite o 2º Número : ");
	scanf("%d", &n2);
	
	printf("Digite o 3º Número : ");
	scanf("%d", &n3);
	

	if((n1 < n2 ) &&  (n1 < n3 ))
	{
		printf("Primeiro Número é o Menor Valor !! ");
	 } 
	 
	 else if((n2 < n3 ) && (n2<n1))
	 {
	 	printf("O Segundo Número é Menor Valor !! ");
	 	
	 }
	 
	 else if((n3 < n1) && (n3<n2))
	 {
	 	printf("O Terceiro Número é Menor Valor !! ");
	 	
	 }
		
	
	

}




main()
{
	setlocale(LC_ALL,"");
	setlocale(LC_ALL,"Portuguese");
	
	//4. Crie uma função em linguagem C que receba 3 números e retorne o menor valor.
	
	dados(n1,n2,n3);
	
}
