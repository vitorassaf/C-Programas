#include <stdio.h>
#include <locale.h>
 main() {
 	setlocale(LC_ALL,"");
 	
 	
  int numsecreto=3, x;

  do{
    printf("Descubra o n�mero secreto:");
    scanf("%d", &x);

  }while(x != numsecreto);
  
  printf("ISSO MESMO!! O NUMERO SECRETO � %d", numsecreto);
}
