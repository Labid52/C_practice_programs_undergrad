#include<stdio.h>
main()
{	int a,b,i,tot=0;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{if(i%2==0)
	{tot=tot+i;
	}
	}
	printf("%d",tot);
}
