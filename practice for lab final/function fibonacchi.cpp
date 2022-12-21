#include<stdio.h>
main()
{	void fibo(int n);
	int n,i,series;
	scanf("%d",&n);	
	fibo(n);
	
	
	
	
}
int fibo(int n)
{	int a=1,b=0,c=0;
	while(c<=n)
	{
	
	printf("%d+",c);
	c=a+b;
	a=b;
	b=c;}
	//printf("%d",c);}
	return 0;
}
