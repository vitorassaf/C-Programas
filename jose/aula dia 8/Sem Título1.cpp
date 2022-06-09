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
   	};		  
   	
   	int i;
   	
	for(i = 0; i < 3;i++)
	{
		printf("\n Digite o nome:");
		scanf("%d", &dados.nome);
		
		printf("\n Digite a idade da pessoa:");
		scanf("%d", &dados.idade);
		
		printf("\n Digite o peso da pessoa");
		scanf("%d", &dados.peso);
		
		printf("\n Digite a altura da pessoa");
		
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
   	};		  
   	
   	int i;
   	
   	for(i = 0; i < 3;i++)
   	{
   		printf("\nNome   -----%d",dados.nome);
   		printf("\nidade  -----%d",dados.nome);
   		printf("\nPeso   -----%d",dados.nome);
   		printf("\n\nAltura-----%d",dados.nome);
   		printf("\n");
	}
}
