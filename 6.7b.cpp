#include<stdio.h>
main()
{	int i,j,k;
	for(i=1;i<=5;i++)
	{if(i!=1)
	{for(j=1;j<=i;j++)
	printf(" ");
	}
	if(i==1)
	{for(k=6;k>=i;k--)
	 printf("*");
	}
	else
	{ for(k=5;k>=i;k--)
	 printf("*");
	}
	printf("\n");
	}
}
