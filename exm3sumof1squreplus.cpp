#include<stdio.h>
#include<math.h>
main()
{	int n,i,tot=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	i=i*i;
		tot=tot+i;
		sqrt(i);
	}
	printf("%d",tot);
}
