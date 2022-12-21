#include <stdio.h>
#include <ctype.h>
main()
{	char ans;
	for(;;)
	{ printf("enter more num");
	  scanf("%c",&ans);
	  if(tolower(ans)=='n')
	  break;
	}
}
