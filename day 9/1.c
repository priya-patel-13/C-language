#include<stdio.h>
void main()
{
	int a,b,c;

	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("enter c:");
	scanf("%d",&c);

	(a<b) ? (a<c) ?
	printf("A is small") : printf("C is small") :
	(b<c) ? printf("B is small"): printf("C is small");

}