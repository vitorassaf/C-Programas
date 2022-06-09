#include <stdio.h>
#include <locale.h>

int main()

{
	setlocale(LC_ALL,"");
	setlocale(LC_ALL,"portuguese");
	int idade,meses,dias,idade_dias,meses_dias,idade_correta;
	
 do
 {
 
 
 printf("\n digita a idade \n");
 scanf("%d",&idade);
 
 printf("Digite os Meses de Idade da Pessoa: \n");
 scanf("%d",&meses);
 
  printf("Digite os Dias de Idade da Pessoa: \n");
 scanf("%d",&dias);
 
idade_dias = idade * 365;
meses_dias = meses * 30;

idade_correta= idade_dias + meses_dias + dias;

 
 printf("\nA Idade da Pessoa em Dias é : %d Dias", idade_correta);
 
}while(idade!=0);
 
}

 

