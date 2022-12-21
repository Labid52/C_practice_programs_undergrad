#include<stdio.h>
main()
{	//int num;
	float i, b=0.0,sum=0.0,num;
	scanf("%f",&num);
	for(i=1;i<=num;i++)
	{b=1/i;
	 sum=b+sum;
	 
	}
	printf("sum of 1+1/2+1/3.... is %f",sum);
}
