#include <stdio.h>
#include <locale.h>

int main()

{
	setlocale(LC_ALL,"");
	setlocale(LC_ALL,"portuguese");
	float altura,base,area;
	
 do
 {
 
 
 printf("digita a altura \n");
 scanf("%f",&altura);
 
 printf("digita agora a base \n");
 scanf("%f",&base);
 
 area = altura * base;
 
 printf("A �rea do retangulo � %f m�\n", area);
 
}while(base!=0);
 
}

 

