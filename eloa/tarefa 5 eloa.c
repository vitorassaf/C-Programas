 
//Crie uma matriz de tamanho determinado pelo usuário 
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>


main ()
{
	
	
int l, c;
int maior_numero = 0;
int menor_numero = 9999;
int media;

printf("Digite a quantidade de linhas:");
scanf("%d",&l);

printf("Digite a quantidade de colunas:");
scanf("%d", &c);

int matriz [l][c];

int i,b;

int soma;

for(i=0;i<l;i++)
	{
		for(b=0;b<l;b++)
		{
			printf("digite o elemento da matriz [%d][%d]",i,b);
			scanf("%d",&matriz[i][b]);
			
			
			if(matriz[i][b] > maior_numero)
	{
		maior_numero= matriz[i][b];
	}
	
			if(matriz[i][b] < menor_numero)
	{
		menor_numero= matriz[i][b];
	}
	
		soma=soma + matriz[i][b];
		
		}
	}
	
	
	media=soma/(c * l);
	
	printf("\nMaior numero:%d",maior_numero);
	printf("\nMenor numero:%d",menor_numero);
	printf("\nA soma:%d",soma);
	printf("\na media:%d ",media);
	

	
	
	
	

}


