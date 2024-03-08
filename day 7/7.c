#include <stdio.h>
void main()
{
	int marks;

	printf("enter your marks:");
    scanf("%d",&marks);

    if(marks>=50)
    {
    	printf("Congratulations! You have passed the exam");
    }
    else 
    {
    	printf("Sorry! You failed the exam better luck next time");
    }

}