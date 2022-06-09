#include <conio.h>
#include <stdio.h>
#include<locale.h>
struct carrinho    
   	{		      		             
		float  velocidade;
		float  km;
		int horas;
		int minutos;
		
   	}dados;
   	
   	float distancia,litros_usados,tempo_total,tempo;

main()
{

	setlocale(LC_ALL,"Portuguese");
   	
 
do
{
		 	
entrada_dados();

calcular();

saida_dados();
}while(dados.km != 0);

}

entrada_dados()
{
	printf("\nDigite o Km/h:");
	scanf("%f",&dados.km);	
	
	printf("\nDigite a velocidade média:");
   	scanf("%f",&dados.velocidade);
   	
   	printf("\nDigite o tempo gasto na viagem em horas/minutos:");
   	scanf("%d",&dados.horas);
   	
   	printf("\nDigite os minutos:");
   	scanf("%d",&dados.minutos);

	   
}


calcular()
{
	tempo = dados.horas + dados.minutos;
	
   	distancia = (tempo * dados.velocidade)/60;
   	
   	litros_usados = distancia / dados.km;
   	
}

saida_dados()
{
	printf("\nvelocidade média:%5.2f",dados.velocidade);
	printf("\ntempo gasto na viagem:%d,%d",dados.horas,dados.minutos);
	printf("\ndistância percorrida:%5.2f",distancia);
	printf("\nquantidade de litros utilizada:%5.2f\n",litros_usados);
}

