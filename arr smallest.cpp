#include<stdio.h>
main()
{	int smallest(int arr[],int size);
	int arr[20],size=20,y,j;
	for(j=0;j<5;j++)
	{scanf("%d",&arr[j]);
	}
	
	y=smallest(arr,size);
	printf("%d",y);
	
	
}
int smallest(int arr[],int size)
{	int i;
	for(i=1;i<5;i++){
	if(arr[0]>arr[i])
    {
	arr[0]=arr[i];
	i++;}}
	return arr[0];
	

	
}
