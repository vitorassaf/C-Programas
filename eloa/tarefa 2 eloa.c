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
		printf("\nEsse Valor n�o � Nulo !! ");
		return 1;
	}
}

main()
{
		setlocale(LC_ALL,"");
		setlocale(LC_ALL,"Portuguese");
				int x, i;
		
		
		//2. Crie uma fun��o que receba um valor e diga se � nulo ou n�o.
	
     	
		do
		{
			printf("\n\nDigite algum Valor : ");
     	    scanf("%d", &i);
	
		
			 x = saida_dados(i);
				
				
		}while(x != 0);
		
		
		
		
		
}
