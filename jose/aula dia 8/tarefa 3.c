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
	Faça um programa que crie um vetor de produtos. Os dados de um produto devem ser armazenados em
	uma variável do tipo STRUCT. O programa deve permitir que o usuário digite 5 produtos. Os dados
	armazenados são: código do produto, descrição do produto e preço unitário. Para saber o preço do produto,
	o usuário deverá digitar o código do produto e o programa deverá encontrar o produto pesquisado; não o
	encontrando mostrar a mensagem “Produto não Cadastrado”; encontrando-o exibir os dados do produto.
	Use uma função para inserir os dados e outra para mostrar os dados.
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
		printf("\nDigite o Código do Produto : ");
		scanf("%d", &tipo[i].cod_produto);
		
		printf("\nDigite a Descrição do Produto : ");
		fflush(stdin);
		gets(tipo[i].desc_produto);
		
		printf("\nDigite o Preço do Produto : ");
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
	printf("\n ------------------ Saída de Dados ---------------------\n ");
	
	printf("\nDigite o Código que Gostaria de Pesquisar : ");
	scanf("%d",&cod_pesquisa);
	

	for(i=0; i<5; i++)
	{
		
		
		if(tipo[i].cod_produto == cod_pesquisa)
		{
			printf("\nproduto------------------- >> %s ",tipo[i].desc_produto);
			printf("\nPreço -------------------- >> R$ %5.2f ", tipo[i].preco_unitario);
		
			teste = cod_pesquisa;
			
		}
	
	
	}
	if(teste != cod_pesquisa)
		{
			printf("Produto não Cadastrado !! ");
		}
	
	
}



