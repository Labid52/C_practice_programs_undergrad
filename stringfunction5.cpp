#include<stdio.h>
main()
{	char line[100],ch=0;
	int a=0;
	for(a=0;ch!='\n';a++)
	{ch=getchar();
	 line[a]=ch;
	}
	line[a]='\0';
	printf("%s",line);
}
