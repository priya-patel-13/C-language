#include <stdio.h>
void main()
{
	for(int i=1;i<=5;i++){
		for(int j=i;j<=5;j++)
		{
			printf("%2d",j );
		}
		printf("\n");
	}
}