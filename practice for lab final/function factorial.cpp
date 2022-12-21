#include<stdio.h>
main()
{	int factorial(int n);
	int n,a;
	scanf("%d",&n);
	a=factorial(n);
	printf("%d",a);
}
int factorial(int n)
{	int num1;
    if(n==1)
	return 1;
    else
	//int i,num1;
{
		num1=n*factorial(n-1);
	return num1;}
	
}
