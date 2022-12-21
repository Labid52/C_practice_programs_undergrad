#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{	char word[10];
	int i,j,l,a;
	gets(word);
	l=strlen(word);
	for(i=0;i<l;i++)
	{for(j=i+1;j<l;j++)
	{if(word[i]>word[j])
	{
	 a=word[i];
	 word[i]=word[j];
	 word[j]=a;
	 
	}
	}
	}
	puts(word);
}
