#include <stdio.h>
#include <locale.h>

int main()

{
	setlocale(LC_ALL,"");
	setlocale(LC_ALL,"portuguese");
	float salario,aumento,reajuste,novo_salario;
	
	do
	{
		printf("\ndigite o seu salario: ");
		scanf("%f",&salario);
		
		printf("\nDigite a porcentagem do reajuste do sal�rio: ");
		scanf("%f",&aumento);
		
		reajuste = aumento/100 *salario;
		
		printf("\nReajuste do sal�rio: R$ %2.f ", reajuste);
		
		novo_salario = reajuste + salario;
		
		printf("\n o Novo sal�rio do funcionario agora �: R$ %2.f",novo_salario);
		
		
	}while(salario!=0);
	

}


 

