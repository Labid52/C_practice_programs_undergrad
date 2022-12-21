#include<stdio.h>
#include<string.h>
main()
{	char ch1[40]="hasan has four house";
	char *pgot_rt=NULL;
	char c='l';
	pgot_rt=strchr(ch1,c);
	if(pgot_rt!=NULL)
	printf("%c",*pgot_rt);
}
