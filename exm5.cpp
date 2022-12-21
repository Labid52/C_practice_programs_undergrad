#include<stdio.h>
main()
{	int a,b,i,n;
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{if(n%i==0)
	{a=1;
	} 
	}
	if(a==0)
	printf("its prime");
	else
	printf("not prime");
}

