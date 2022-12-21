#include<stdio.h>
main()
{	int a,b;
	int tot=0,i;
	scanf("%d",&a);
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{tot=tot+i;
	}
	printf("%d",tot);
}
