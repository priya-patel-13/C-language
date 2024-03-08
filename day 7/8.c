#include <stdio.h>
void main()
{
	int marks;

	printf("enter your marks:");
	scanf("%d",&marks);

	if(marks<=100 && marks>=90)
	{
		printf("you are passed with A grade");
	}
	else if(marks<=89 && marks>=80)
	{
		printf("you are passed with B grade");
	}
	else if(marks<=79 && marks>=70)
	{
		printf("you are passed with c grade");
	}
	else if(marks<=69 && marks>=60)
	{
		printf("you are passed with D grade");
	}
	else
	{
		printf("you are passed with F grade");
	}
}