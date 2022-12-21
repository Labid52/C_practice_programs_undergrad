#include<stdio.h>
main()
{	int i,j,k,n,l,m;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{for(j=1;j<=i;j++)
	 printf(" ");	 
	 for(k=n;k>=i;k--)
	 printf("* ");
	 for(l=1;l<=i-1;l++)
	 printf("  ");	 
	 for(m=n;m>=i;m--)
	 printf("* ");
	 printf("\n");

	}
	for(i=1;i<=n;i++){
	 for(j=n;j>=i;j--)
	 printf(" ");	 
	 for(k=1;k<=i;k++)
	 printf("* ");
	 for(l=n;l>=i+1;l--)
	 printf("  ");	 
	 for(m=1;m<=i;m++)
	 printf("* ");
	 printf("\n");}
	
}
