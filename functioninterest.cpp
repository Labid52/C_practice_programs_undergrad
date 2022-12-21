#include<stdio.h>
float inter(float p,int n,float r);
main()
{	float a,b,c;
	int d;
	scanf("%f%d%f",&a,&d,&b);
	c=inter(a,d,b);
	printf("%.3f",c);
}
float inter(float ab,int cd, float da)
{	float i;
	i=ab*cd*da/100;
	return i;
}
