#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>
/*
Crie uma função que receba um valor e diga se é nulo ou não. 
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
		printf("\né nulo!\n");
	}
	
	else
	{
		printf("\nNão é nulo!\n");
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

 

