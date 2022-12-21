#include<stdio.h>
main()
{	int a,b,i,tot=0;
	scanf("%d%d",&a,&b);;
	for(i=a;i<=b;i++)
	{if(i%2==1)
	{tot=tot+i;
	}
	}
	if(tot>9000)
	printf("%d",tot);
	
	else
	printf("its below 9000");
}
