#include<stdio.h>
main()
{	int reverse(int n);
	int n,num;
	scanf("%d",&n);
	num=reverse(n);
	if(num==n)
	{printf("%d is palindrome number",n);
	}
	else
	printf("check another");
}
int reverse(int n)
{	int temp,rev=0,rem;
	temp=n;
	while(temp!=0)
	{rem=temp%10;
	 rev=rev*10+rem;
	 temp=temp/10;
	}
	return rev;
}
