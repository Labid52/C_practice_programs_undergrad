#include<stdio.h>
#include<string.h>
main()
{	char ch1[20];
	char ch2[20];
	int m;
	size_t n=10;
    scanf("%19s",ch1);
    scanf("%19s",ch2);
    m=strcmp(ch1,ch2);
    if(m==0)
    printf("ch1 and ch2 are same");
    else if(m<0)
    printf("ch2 lags ch1");
    else
    printf("ch2 leads ch1");
}
