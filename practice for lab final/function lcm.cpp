#include<stdio.h>
main()
{	int lcm(int a,int b);
	int a,b;
	scanf("%d%d",&a,&b);
	printf("the required lcm is %d",lcm(a,b));
	 
}
int lcm(int a,int b)
{	int c,d,e,f,num;
	e=a;f=b;
	while(b!=0)
	{d=b;
	c=a%b;
	 b=c;
	 a=d;
	 
	}
	num=e*f/a;
	return num;
	
		
		
		
	}

