#include<stdio.h>
main()
{	float gained_gp,credit_corres,total=0.0,total_credit=0.0;
	float cgpa;
	int no_subject,i;
	//float cgpa(float gained_gp,float credit_corres,int no_subject);
	printf("number of subjects:");
	scanf("%d",&no_subject);
	for(i=1;i<=no_subject;i++)
	{printf("grade point %d:",i);
	 scanf("%f",&gained_gp);
	 getchar();
	 printf("credit %d:",i);
	 scanf("%f",&credit_corres);
	 total_credit=total_credit+credit_corres;
	 total=total+gained_gp*credit_corres;
	 getchar();
	 
	}
	cgpa=total/total_credit;
	printf("YOUR CGPA IS %.3f",cgpa);
	
}
