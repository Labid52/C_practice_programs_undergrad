#include<stdio.h>
main()
{	char ch1[][40]={"to be or not to be",
                ",that is the question"};
    int count[2]={0,0},i;
	for(i=0;i<2;i++)
	{while(ch1[i][count[i]])
	 count[i]++;
	}
	if(sizeof ch1[0]<count[0]+count[1]+1)
	printf("no way");
	else{
	
	count[1]=0;
	while(ch1[1][count[1]])
	ch1[0][count[0]++]=ch1[1][count[1]++];}
	ch1[0][count[0]]='\0';
	printf("%s",ch1[0]);
	            
}
