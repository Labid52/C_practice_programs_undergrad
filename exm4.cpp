#include<stdio.h>
main()
{	int a=1,b=1,i,j,n,tot=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{b=1;
	 for(j=2;j<=i+1;j++)
	{b=b*j;
	}
	a=i*i;
	tot=tot+(a*b);
	}
	printf("%d",tot);
}
