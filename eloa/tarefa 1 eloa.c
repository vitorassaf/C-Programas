#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>
/*
Crie uma fun��o que receba um valor e diga se � nulo ou n�o. 
*/

int numero;

entrada_dados()
{
	printf("\ndigite um numero\n");
    scanf("%d",&numero);
}

processamento_dados()
{
	if(numero == 0 )
	{
		printf("\n� nulo!\n");
	}
	
	else
	{
		printf("\nN�o � nulo!\n");
	}
}

main()
{
    setlocale(LC_ALL,"");
    setlocale(LC_ALL,"Portuguese");
do
{
entrada_dados();
processamento_dados();



}while(numero != 0);

}

 

