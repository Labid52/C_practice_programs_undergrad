
 #include<stdio.h>
main()
{	float x=100.5,y;
	float *ptr;
	ptr=&x;
	y=*ptr;
	printf("%f",y);
	
}
