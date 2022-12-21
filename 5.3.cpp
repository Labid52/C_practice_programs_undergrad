#include<stdio.h>
main()
{	int x=2,y=1,z=0;
	switch(x)
	{case 2:
		x=1;
		y=x+1;
	case 1:
		x=0;
		break;
	default:
		x=1;
		y=0;	
	}
	printf("%d%d%d",x,y,z);

}
