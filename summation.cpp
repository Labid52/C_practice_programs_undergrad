#include <stdio.h> 
main() 
{	long sum;
	int i,count;
	scanf("%d",&count);
	for(i=1;i<=count;i++)
	sum=sum+i;
	printf("the sum of given num is %ld",sum);
}
