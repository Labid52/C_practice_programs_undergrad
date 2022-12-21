 #include<stdio.h>
main()
{	int num,temp,rev=0,rem;
	scanf("%d",&num);
	temp=num;
    for(;temp!=0;)
	{rem=temp%10;
	 rev=rev*10+rem;   
	 temp=temp/10;
		}
	printf("%d is the reverse",rev);		
}
