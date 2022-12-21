#include<stdio.h>
#include<string.h>
main()
{	char s1[]="anil kumar gopta";
	char s2[]="kumar";
	int m;
	//strncpy(s1,s2,3);
	m=printf("%s",strstr(s1,s2));
	//printf("%s",s1);
}
