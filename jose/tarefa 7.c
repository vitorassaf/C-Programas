#include <stdio.h>
#include <locale.h>

int main()

{
	setlocale(LC_ALL,"");
	setlocale(LC_ALL,"portuguese");
	float p_carro, p_d,imp;
	float impostos = 45;
	float distribuidor = 28;
	float custo_final;
	
	do
	{
		printf("\nDigite o preço de fabrica do carro: ");
		scanf("%f",&p_carro);
		
		p_d = (p_carro * distribuidor / 100);
		imp = (p_carro * impostos / 100);
		
		custo_final= imp + p_d + p_carro;
		
		printf("\nValor Final : R$ %f", custo_final);
		
	}while(p_carro!=0);
	

}


 

