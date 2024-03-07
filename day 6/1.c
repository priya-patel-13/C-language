#include <stdio.h>
void main()
{
	int p,d;

	printf("\n enter your price:");
	scanf("%d",&p);

	printf("\n enter your disscount:");
	scanf("%d",&d);

	printf("your profite is: %d",(p*d)/100);
}