#include <stdio.h>

max(int *a, int *b)
{
	if(*a < *b){
		printf("Max %d",*b);
	}
	else{
		printf("max %d",*a);
	}
}

void main()
{
	int a,b;

	printf("Enter value of a:",a);
	scanf("%d",&a);
	printf("Enter value of a:",b);
	scanf("%d",&b);

	max (&a , &b);
}
