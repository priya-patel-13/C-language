#include <stdio.h>

min(int *a, int *b)
{
	if(*a > *b){
		printf("Min %d",*b);
	}
	else{
		printf("min %d",*a);
	}
}

void main()
{
	int a,b;

	printf("Enter value of a:",a);
	scanf("%d",&a);
	printf("Enter value of a:",b);
	scanf("%d",&b);

	min (&a , &b);
}
