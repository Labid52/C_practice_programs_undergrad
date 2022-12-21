#include<stdio.h>
main()
{	int i,a,b,j,c;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{for(j=2;j<i;j++)
	{if(i%j!=0||i==2)
	{ c=i;
	}
	else
	continue;
	}
	 printf("%d",c);
	}
}
