#include <stdio.h>
#include <locale.h>

int main()

{
	setlocale(LC_ALL,"");
	setlocale(LC_ALL,"portuguese");
	int brancos,nulos,valido,eleitor,pv,pb,pn;
	
	do
	{
		printf("\nDigite n�mero total de eleitores do munic�pio: ");
		scanf("%d",&eleitor);
		
		printf("\nDigite o n�mero de votos Brancos: ");
		scanf("%d",&brancos);
		
		printf("\nDigite o n�mero de votos Nulos: ");
		scanf("%d",&nulos);
		
		printf("\nDigite o n�mero de votos V�lidos: ");
		scanf("%d",&valido);
		
		pb= brancos * 100 / eleitor;
		pv= valido  * 100 / eleitor;
		pn= nulos   * 100 / eleitor;
		
		printf("\nporcentagem de votos Brancos: %d ./.",pb);
		printf("\nporcentagem de votos nulos: %d ./.",pn);
		printf("\nporcentagem de votos validos: %d ./.",pv);
		
		
	}while(eleitor!=0);
	

}


 

