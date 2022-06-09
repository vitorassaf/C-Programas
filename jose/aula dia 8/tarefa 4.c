#include <stdio.h>
#include <locale.h>
#include <string.h>

struct perfil
{
	int conta;
	char nome[30];
	long int  CPF;
	float saldo;
	
	
	
}tipo[3];



main()
{
	setlocale(LC_ALL,"");
	setlocale(LC_ALL,"Portuguese");
	
	
	entrada();
	
	int menu;
	
	do
	{
	
	printf("\n---Menu---\n");
	printf("1-Consulta\n");
	printf("2-saque\n");
	printf("3-deposito\n");
	printf("4-sair\n");
	printf("\n");
	scanf("%d", &menu);
	
	if(menu==1)
	{
		consulta();
	}
	
	if(menu==2)
	{
		saque();
	}
	
	if(menu==3)
	{
		deposito();
	}
	
	}while(menu != 4);
	
	printf("\nObrigado por usar nossos serviços!\n");
}



entrada()
{
	int i;
	
	printf("\n ---------------- Entrada de Dados ----------------------------\n ");
	
	for(i = 0; i <3; i++)
	{
		
		
		printf("\nDigite o nome:\n ");
		fflush(stdin);
		gets(tipo[i].nome);
		
		printf("\nDigite o Numero da conta:\n ");
		scanf("%d", &tipo[i].conta);
		
		printf("\nDigite o CPF:\n ");
		scanf("%li", &tipo[i].CPF);
		
		printf("\nDigite o Deposito inicial:\n");
		scanf("%f", &tipo[i].saldo);
		
		
		printf("\n");
	}
}

consulta()
{
	int cod_pesquisa;
	int teste;
	int i;
	teste = 0;
	
	printf("\n -----CONSULTA-----");
	
	printf("\nDigite o numero da conta : ");
	scanf("%d",&cod_pesquisa);
	

	for(i=0; i<3; i++)
	{
		
		
		if(tipo[i].conta == cod_pesquisa)
		{
			printf("\n Nome: ---%s \n ",tipo[i].nome);
			printf("\n CPF : ---%li\n ",tipo[i].CPF);
			printf("\n Saldo:---R$ %5.2f \n ",tipo[i].saldo);
		
			teste = cod_pesquisa;
			
		}
	
	
	}
	if(teste != cod_pesquisa)
		{
			printf("Conta invalida ou não cadastrada !! ");
		}
}

saque()
{
	
	int cod_verifica;
	int verifica;
	int i;
	float saque;
	verifica = 0;
	
	printf("-----SAQUE-----");
	
	printf("\n digite o numero da conta:");
	scanf("%d",&cod_verifica);
	
	for(i=0; i<3; i++)
	{
		
		
		if(tipo[i].conta == cod_verifica)
		{
			printf("\n Nome:%s",tipo[i].nome);
			printf("\n Saldo:---R$ %5.2f \n ",tipo[i].saldo);
			
			printf("\n digite a quantia do saque:\n");
			scanf("%f",&saque);
			
			tipo[i].saldo = tipo[i].saldo - saque;
			
			printf("\n Novo saldo: R$ %5.2f \n ",tipo[i].saldo);
			
			verifica = cod_verifica;
		}
	
	
	}
	if(verifica != cod_verifica)
		{
			printf("Conta invalida ou não cadastrada !! ");
		}
	

}
deposito()
{
		int cod_verifica;
	int verifica;
	int i;
	float deposito;
	verifica = 0;
	
	printf("-----DEPOSITO-----");
	
	printf("\n digite o numero da conta:");
	scanf("%d",&cod_verifica);
	
	for(i=0; i<3; i++)
	{
		
		
		if(tipo[i].conta == cod_verifica)
		{
			printf("\n Nome:%s",tipo[i].nome);
			printf("\n Saldo:---R$ %5.2f \n ",tipo[i].saldo);
			
			printf("\n digite a quantia para depositar:\n");
			scanf("%f",&deposito);
			
			tipo[i].saldo = tipo[i].saldo + deposito;
			
			printf("\n Novo saldo: R$ %5.2f \n ",tipo[i].saldo);
			
			verifica = cod_verifica;
		}
		
		if(verifica != cod_verifica)
		{
			printf("Conta invalida ou não cadastrada !! ");
		}
	}
}

