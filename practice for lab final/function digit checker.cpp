#include<stdio.h>
main()
{	int dgt_chck(int num);
	int num,a;
	scanf("%d",&num);
	a=dgt_chck(num);
	printf("number of digit is %d",a);
	
}
int dgt_chck(int num)
{	int rev,rem=0,temp,i;
	temp=num;
	while(temp!=0)
	{rem=temp%10;
	 rev=rev*10+rem;
	 temp=temp/10;
	 i++;
	}
	return i;
	
}
