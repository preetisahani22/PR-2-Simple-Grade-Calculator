#include<stdio.h>

int main()
{
	int score;
	char grade;
	
	printf("enter score : ");
	scanf("%d",&score);
	
	grade = (score >= 90) ? 'A' :
		    (score >= 80) ? 'B' :
		    (score >= 70) ? 'C' :
		    (score >= 60) ? 'D' : 'F';
		    
	printf("Grade is  %C",grade);
	
	return 0;							
}
