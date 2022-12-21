#include<stdio.h>
main()
{	int hcf(void);
	int a,b;
	scanf("%d%d",&a,&b);
	//printf("required hcf is %d",hcf(a,b));
	hcf();
}
int hcf(void)
{	int i,num,a,b;
	for(i=1;i<=a||i<=b;i++)
	{if(a%i==0&&b%i==0)
	 num=i;
	}
	return num;
}
