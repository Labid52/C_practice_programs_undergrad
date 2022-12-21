#include <stdio.h>
main()
{	int a;
	char r4;
	for(;;)
	{  printf("put the integer:\n");
	   scanf("%d",&a);
	   printf("put another number?\n");
	   getchar();
	   scanf("%c",&r4);
	   
	   if(r4=='n')
	   { break; 
			   }
		   		
	}
}
