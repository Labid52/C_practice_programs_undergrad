#include<stdio.h>
#include<string.h>
main()
{	char ans[20],coans[20]="dennish ritche";
	char line[30]="Who is the inventor of C ?";
	int i,j,k;
	puts(line);
	for(j=1;j<=3;j++){
	gets(ans);	
	i=strcmp(ans,coans);	
	if(i==0){
	puts("Good");
	break;}
	else
	{ if(j<3)
	  puts("try again");
	  }}
	 if(i!=0)
	  puts("correct ans is:");
	  puts(coans);
	  
	
}
