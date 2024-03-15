#include <stdio.h>
void main(){

	int sy,ey;

	printf("enter the value of sy:");
	scanf("%d",&sy);
	printf("enter the value of ey:");
	scanf("%d",&ey);

	while(sy<=ey)
	{
		if(sy%4==0)
			printf("\n %d",sy);
		sy++;
	}
}