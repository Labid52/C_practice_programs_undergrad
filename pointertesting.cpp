
 #include<stdio.h>
main()
{	int x=100,y;
	int *ptr1,*ptr2;
	ptr1=&x;
	ptr2=ptr1;
	y=*ptr1;
	printf("%p",ptr2);
	
}
