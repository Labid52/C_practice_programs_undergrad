#include<stdio.h>
#define PI 3.1416
main()
{	int R,C;
	float perimeter,area;
	C=PI;
	R=5;
	perimeter=2.0*C*R;
	area=C*R*R;
	printf("%f%d",perimeter,area);
}
