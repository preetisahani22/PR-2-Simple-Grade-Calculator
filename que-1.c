#include<stdio.h>
int main()
{
	int score;
	char grade;
	
	printf("Enter score");
	scanf("%d",&score);
	
	grade = (score >= 90) ? 'A':
		    (score >= 80) ? 'B':
		    (score >= 70) ? 'C':
		    (score >= 60) ? 'D': 'F';
		    
	printf("Enter the grade %c",grade);
	
	switch(grade)
	{
		case 'A':
			printf("Excelent work!");
		    break;
		
		case 'B':
			printf("well done!");
		    break;
		
		case 'C':
			printf("Good Job!");
		    break;
		
		case 'D':
			printf("You passed but you could do better.");
		    break;
		
		case 'F':
			printf("sorry you failed.");
		    break;
		default:
			printf("wrong choice.");
		
	}
	return 0;
}
