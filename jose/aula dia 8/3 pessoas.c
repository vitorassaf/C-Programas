#include <conio.h>
#include <stdio.h>
#include<locale.h>
main()
{

	setlocale(LC_ALL,"Portuguese");
   
   
entrada_dados();

saida_dados();

}

entrada_dados()
{
	struct  pessoas     
   	{		      		     
	 	char   nome[30];      
	 	int  idade;         
	 	float  peso;
		float  altura;
   	}dados[3];
   	
   	int i;
   	
	for(i = 0; i < 3;i++)
	{
		printf("\n Digite o nome:");
		fflush(stdin);
		gets(dados[i].nome);
		
		printf("\nDigite a idade da pessoa:");
		scanf("%d", &dados[i].idade);
		
		printf("\nDigite o peso da pessoa:");
		scanf("%f", &dados[i].peso);
		
		printf("\nDigite a altura da pessoa:");
		scanf("%f", &dados[i].altura);
		
		printf("\n");
	}
}

saida_dados()
{
	struct  pessoas     
   	{		      		     
	 	char   nome[30];      
	 	int  idade;         
	 	float  peso;
		float  altura;
   	}dados[3];	  
   	
   	int i;
   	
   	for(i = 0; i < 3;i++)
   	{
   		printf("\nNome   -----%s",dados[i].nome);
   		printf("\nidade  -----%d",dados[i].idade);
   		printf("\nPeso   -----%5.2f",dados[i].peso);
   		printf("\nAltura -----%5.2f",dados[i].altura);
   		printf("\n");
	}
}
