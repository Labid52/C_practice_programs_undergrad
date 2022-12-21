 //  #include<conio.h>
   #include<stdio.h>
main()
{	int a,b=0,num; 
	scanf("%d",&num);
	for(a=2;a<num;a++)
	{ if(num%a==0)
	  b=1; 
	  else
	  continue; 
	}
	if(b==1)
	printf(" not prime ");
	else
	printf(" prime");
//	getch();
}
