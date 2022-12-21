#include<stdio.h>
#include<string.h>
main()
{	char str1[20]="it is a good house",str2[15];
	//gets(str1);
	strncpy(str2,str1+8,10);
	puts(str2); 

}
