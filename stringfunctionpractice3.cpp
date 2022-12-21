#include<stdio.h>
#include<string.h>
main()
{	char ch1[40]="jack and jill went up the hill";
	char ch2[40]="jack and jill";
	char ch3[40]="went up the hill";
	if(strstr(ch1,ch2)!=NULL)
	printf("\"%s\" was found in \"%s\"",ch2,ch1);
}
