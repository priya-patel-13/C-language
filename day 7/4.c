#include <stdio.h>
void main()
{
	int a;

	printf("enter value of a:");
	scanf("%d",&a);


	if(a>18)
	{
		printf("You can Vote");

	}
	else if(a==18)
	{
		printf("You can also vote.");
	}
	else
	{
		printf("You cannot vote.");
	}
}