#include<stdio.h>
main()
{	int i,a,b,j;
	getchar();
	scanf("%d %d",&a,&b);
	
	for(i=a;i<=b;i++)
	{for(j=1;j<=i;j++)
	{if(i%j!=0||i==2)
	{printf("%d",i);
	}
	}
	}
}
