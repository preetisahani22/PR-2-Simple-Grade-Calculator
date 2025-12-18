#include<stdio.h>
int main()
{
	int score;
	char grade;
	
	printf("Enter score: ");
	scanf("%d",&score);
	
	if(score >= 90 && score <= 100)
	{
		grade = 'A';
	}
	else if(score >= 80 && score < 90)
	{
		grade = 'B';
	}
		
	else if(score >=70 && score < 80)
	{
		grade = 'C';
		 
    }
		 
	else if(score>= 60 && score<70)
	{
	     grade='D';	
	}
		
	else
	{
		grade = "F";
	}
	
	if(grade == 'A' || grade == 'B'   || grade == 'C' || grade == 'D')
	{
		printf("Pass");
	}
	else
	{
		printf("Fail");
	}
	
    return 0;	
	
}
