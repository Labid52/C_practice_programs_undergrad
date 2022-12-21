#include<stdio.h>
main()
{	float rice,sugar;
	char list[3][100]={"item    price\n"
	                  "rice    rs. 16.75\n"
	                  "sugar   rs. 15"};
	scanf("%f%f",&rice,&sugar);
	puts("***LIST OF ITEMS***");
	printf("%s",list);
	
}
