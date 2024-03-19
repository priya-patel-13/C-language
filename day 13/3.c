#include<stdio.h>
void main()
{
	int number,digit;

	printf("enter the value of digit:");
	scanf("%d",&digit);

	
		for (number=1;number<=10;number++)
	{
		printf("%d * %d = %d\n",digit,number,number*digit);

	}

}