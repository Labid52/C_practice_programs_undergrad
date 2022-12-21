#include <stdio.h>
#include <ctype.h>
main()
{	double total=0.0,value=0.0;
	int count=0;
	char ans='N';
	for(;;)
	{ printf("\nenter a value:");
	  scanf("%lf",&value);
	  total+=value;
	  ++count;
	  printf("\n wanna press another value?\n");
	  getchar();
	  scanf("%c",&ans);
	  if(tolower(ans)=='n')
	  {  break;
	  }
	  getchar();
	  }
	  

	  printf("\nthe required ans is%lf",total/count);
	
}
