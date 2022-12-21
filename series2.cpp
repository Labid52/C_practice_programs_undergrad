#include<stdio.h>
main()
{	int i,sum=0,num;
	scanf("%d",&num);
	for(i=1;i<=num;i=i+2)
	{sum=i+sum;
	 
	}
	printf("sum of odd no is %d",sum);
}
