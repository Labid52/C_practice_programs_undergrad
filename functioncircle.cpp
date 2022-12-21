#include<stdio.h>
#include<math.h>
#define PI 3.1416
float area(float r);
float circum(float r);
main()
{	//int a;
	float a,b,c;
	scanf("%f",&a);
	b=area(a);
	c=circum(a);
	printf("area is %.3f\n",b);
	printf(" circumference is %.3f",c) ;
}
float area(float r )
{	float m;
	m=PI*pow(r,2);
	return m;
}
float circum(float r)
{	float n;
	n=2*PI*r;
	return n;
}
