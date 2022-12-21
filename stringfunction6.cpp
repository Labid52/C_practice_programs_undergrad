#include<stdio.h>
main()
{	char name[30],a;
	int n=0;
	while(a!='\n')
	{ a=getchar();
	  name[n]=a;
	  n++;
	}
	name[n]='\0';
	n=0;
	while(name[n]!='\0')
	{printf("%d",name[n]);
	 n++;}	
}
