#include<stdio.h>
main()
{	int a,b=1,c=0,num,temp;
	scanf("%d",&num);
	for(a=1;;a++)
	{ temp=b+c;
	  if(temp>num)
	  break;
	  printf("%d",temp);
	  b=c;
	  c=temp; 
	  
	  
	}
	}	
