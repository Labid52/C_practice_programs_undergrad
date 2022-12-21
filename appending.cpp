#include<stdio.h>
main()
{	char ch1[40]="to be or not to be";
	char ch2[]=",that is the question";
	int count1=0, count2=0;
	while(ch1[count1])
	count1++;
	while(ch2[count2])
	count2++;
	if(sizeof ch1<count1+count2+1)
	printf("no way");
	else
	{
	
	count2=0;
	while(ch2[count2])
	ch1[count1++]=ch2[count2++];
	ch1[count1]='\0';
	printf("%s",ch1);}
	
	
}
