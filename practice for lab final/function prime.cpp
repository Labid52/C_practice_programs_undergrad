#include<stdio.h>
main()
{	int prime(int num);
	int num,a;
	scanf("%d",&num);
	a=prime(num);
	if(a==1||num==2)
	printf("%d is prime number",num);
	if(a==0)
	printf("not prime");
	
}
int prime(int num)
{	int i;
	for(i=2;i<num;i++)
	{if(num%i==0)
	 return 0;
	 else 
	 return 1;
	}
}
