#include<stdio.h>
void main()
{
	int a,b,c,d;

	printf("\n enter the value of a:");
	scanf("%d",&a);
	printf("\n enter the value of b:");
	scanf("%d",&b);
	printf("\n enter the value of c:");
	scanf("%d",&c);
	printf("\n enter the value of d:");
	scanf("%d",&d);
     
     if (a>b && a>c && a>d)
     {
     	printf("a is big...");
     }
     else if(b>c && b>d)
     {
     	printf("b is big...");
     }
     else if(c>d)
     {
     	printf("c is big...");
     }
     else
     {
     	printf("d is big...");
     }
	
	
}