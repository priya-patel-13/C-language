#include <stdio.h>
void main()
{
	int a;

	printf("\n enter the value of a:");
	scanf("%d",&a);

	(a%2==0) ? printf("this is even number..") : printf("this is odd number..");
}