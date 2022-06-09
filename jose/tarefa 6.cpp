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
		
		printf("\nDigite a porcentagem do reajuste do salário: ");
		scanf("%f",&aumento);
		
		reajuste = aumento/100 *salario;
		
		printf("\nReajuste do salário: R$ %2.f ", reajuste);
		
		novo_salario = reajuste + salario;
		
		printf("\n o Novo salário do funcionario agora é: R$ %2.f",novo_salario);
		
		
	}while(salario!=0);
	

}


 

