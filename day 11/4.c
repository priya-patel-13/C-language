#include <stdio.h>
void main()
{
	int n;

	printf("enter value of n:\n");
	scanf("%d",&n);

	while(n>=1){
		if(n%2)
			printf("\n %d",n);
		n--;
	}
}