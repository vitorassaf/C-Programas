#include <stdio.h>
#include <locale.h>

int i;

valor()
{
	
	
}

int saida_dados(int i)
{
	if(i == 0)
	{
		printf("\nValor Nulo !! ");
		return 0;
	}
	
	else 
	{
		printf("\nEsse Valor não é Nulo !! ");
		return 1;
	}
}

main()
{
		setlocale(LC_ALL,"");
		setlocale(LC_ALL,"Portuguese");
				int x, i;
		
		
		//2. Crie uma função que receba um valor e diga se é nulo ou não.
	
     	
		do
		{
			printf("\n\nDigite algum Valor : ");
     	    scanf("%d", &i);
	
		
			 x = saida_dados(i);
				
				
		}while(x != 0);
		
		
		
		
		
}
