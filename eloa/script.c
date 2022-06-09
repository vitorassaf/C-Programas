#include <stdio.h>
#include <locale.h>

 main() 
 {
 	
 	setlocale(LC_ALL,"");
 	
 	 int x, y;
 	 
 	 for(x=0 ; x <= 1000; x++){
 	 	if (x%7==0)
 	 	{
 	 		print("%d\t", x);
		  }
	  }
}

 

