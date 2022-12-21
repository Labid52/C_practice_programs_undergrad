#include<stdio.h>
main()
{	int facfun(int n,int i);
	int i,n,factor;
	scanf("%d",&n);
	
	for(i=1;i<=n;++i)
   { factor=facfun(n,i);
     if(factor!=0)
	 printf("%d ",factor);
	 else
	 continue;
	 
	}
}
int facfun(int n,int i)
{	int fly;
//	for(i=1;i<=n;i++)
	if(n%i==0)
	{fly=i;
	 return fly;
	}
	
	else
	return 0;
	
}
