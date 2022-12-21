#include<stdio.h>
main()
{	int sum(int n);
	int n,sum1;
	scanf("%d",&n);
	sum1=sum(n);
	printf("%d",sum1);
}
int sum(int n)
{	int i,tot=0;
	for(i=1;i<=n;i++)
	{tot=tot+i;
	}
	return tot; 
}
