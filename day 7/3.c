#include <stdio.h>
void main()
{
	int a;

	printf("enter value of a:");
	scanf("%d",&a);


	if(a<0)
	{
		printf("a is nagative");

	}
	else if(a==0)
	{
		printf("a is natural number");
	}
	else
	{
		printf("a is possitive");
	}
}