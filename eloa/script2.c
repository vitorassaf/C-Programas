#include <stdio.h>
#include <locale.h>

 main() 
 {
 	
 	setlocale(LC_ALL,"");
 	
 	 int x, produto= 1;
 	 for(x=1; x<=15 ; x++)
 	 {
	  
 	 if(x%2!=0)
 		 {	
 	 	produto = produto *x;
 	 	printf("%d\t",x);
	  	}
     }
     {
     	printf("\n\n pruduto %d", produto);
	 }
}

 

