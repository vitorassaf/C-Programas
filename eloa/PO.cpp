#include <stdio.h>
 
int soma (int x, int y){
 int res; 
 res=x+y;
 return res;
 
}
int main(void) {
 int a, b;
 printf("Digite o primeiro numero:");
 scanf("%d", &a);
 printf("Digite o segundo numero:");
 scanf("%d", &b);
 
 printf("A soma é: %d", soma(a,b));
 return 0;
}
