#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>
/*
Crie uma fun��o que receba um valor e informe se ele � positivo ou n�o.
*/

int numero;

entrada_dados()
{
	printf("\ndigite um numero\n");
    scanf("%d",&numero);
}

processamento_dados()
{
	if(numero > 0 )
	{
		printf("\nPositivo!\n");
	}
	
	if(numero < 0)
	{
		printf("\nNegativo!\n");
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

 

