#include<stdio.h>
#include<math.h>
main()
{	int n,i,tot=0;
	scanf("%d",&n);
	for(i=1;i<=n;)
	{	i=pow(i,2);
		tot=tot+i;
		i=sqrt(i);
		i++;
	}
	printf("%d",tot);
}
