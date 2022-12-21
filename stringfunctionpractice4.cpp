#include<stdio.h>
#include<ctype.h>
main()
{	char ch1[40];
	int cntalpha=0,cntdigit=0,i=0;
	gets(ch1);
	while(ch1[i]!='\0')
	{if(isalpha(ch1[i]))
	 cntalpha++;
     if(isdigit(ch1[i]))
	 cntdigit++;
	 i++;
	}
	printf("the string has %d letters and %d digit",cntalpha,cntdigit);
}
