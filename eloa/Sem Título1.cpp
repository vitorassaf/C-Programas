#include <stdio.h>
#include <locale.h>
 main() {
 	setlocale(LC_ALL,"");
 	
 	
  int numsecreto=3, x;

  do{
    printf("Descubra o número secreto:");
    scanf("%d", &x);

  }while(x != numsecreto);
  
  printf("ISSO MESMO!! O NUMERO SECRETO É %d", numsecreto);
}
