#include <stdio.h>
#include <locale.h>
#include <string.h>

struct produtos
{
	int cod_produto;
	char desc_produto[30];
	float preco_unitario;
	
	
	
}tipo[5];



main()
{
	setlocale(LC_ALL,"");
	setlocale(LC_ALL,"Portuguese");
	
	
	/*
	Fa�a um programa que crie um vetor de produtos. Os dados de um produto devem ser armazenados em
	uma vari�vel do tipo STRUCT. O programa deve permitir que o usu�rio digite 5 produtos. Os dados
	armazenados s�o: c�digo do produto, descri��o do produto e pre�o unit�rio. Para saber o pre�o do produto,
	o usu�rio dever� digitar o c�digo do produto e o programa dever� encontrar o produto pesquisado; n�o o
	encontrando mostrar a mensagem �Produto n�o Cadastrado�; encontrando-o exibir os dados do produto.
	Use uma fun��o para inserir os dados e outra para mostrar os dados.
	*/
	
	informacoes_produtos();
	impressao_dados();
	

}



informacoes_produtos()
{
	int i;
	
	printf("\n ---------------- Entrada de Dados ----------------------------\n ");
	
	for(i = 0; i <5; i++)
	{
		printf("\nDigite o C�digo do Produto : ");
		scanf("%d", &tipo[i].cod_produto);
		
		printf("\nDigite a Descri��o do Produto : ");
		fflush(stdin);
		gets(tipo[i].desc_produto);
		
		printf("\nDigite o Pre�o do Produto : ");
		scanf("%f", &tipo[i].preco_unitario);
		
		
		printf("\n");
		
		
		
		
	}
}


impressao_dados()
{
	int i;
	int cod_pesquisa;
	int teste;
	teste = 0;
	printf("\n ------------------ Sa�da de Dados ---------------------\n ");
	
	printf("\nDigite o C�digo que Gostaria de Pesquisar : ");
	scanf("%d",&cod_pesquisa);
	

	for(i=0; i<5; i++)
	{
		
		
		if(tipo[i].cod_produto == cod_pesquisa)
		{
			printf("\nproduto------------------- >> %s ",tipo[i].desc_produto);
			printf("\nPre�o -------------------- >> R$ %5.2f ", tipo[i].preco_unitario);
		
			teste = cod_pesquisa;
			
		}
	
	
	}
	if(teste != cod_pesquisa)
		{
			printf("Produto n�o Cadastrado !! ");
		}
	
	
}



