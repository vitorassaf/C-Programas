#include <stdio.h>
#include <locale.h>





int n1,n2,n3;

int dados()
{

	
	

	
	printf("Digite o 1� N�mero : ");
	scanf("%d", &n1);
	
	printf("Digite o 2� N�mero : ");
	scanf("%d", &n2);
	
	printf("Digite o 3� N�mero : ");
	scanf("%d", &n3);
	

	if((n1 < n2 ) &&  (n1 < n3 ))
	{
		printf("Primeiro N�mero � o Menor Valor !! ");
	 } 
	 
	 else if((n2 < n3 ) && (n2<n1))
	 {
	 	printf("O Segundo N�mero � Menor Valor !! ");
	 	
	 }
	 
	 else if((n3 < n1) && (n3<n2))
	 {
	 	printf("O Terceiro N�mero � Menor Valor !! ");
	 	
	 }
		
	
	

}




main()
{
	setlocale(LC_ALL,"");
	setlocale(LC_ALL,"Portuguese");
	
	//4. Crie uma fun��o em linguagem C que receba 3 n�meros e retorne o menor valor.
	
	dados(n1,n2,n3);
	
}
