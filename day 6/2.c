#include <stdio.h>
void main()
{
	float w,h,BMI;

	printf("\n enter your weight:");
	scanf("%f",&w);

	printf("\n enter your height:");
	scanf("%f",&h);

	BMI=(w)/(h*h);

	printf("your ans is :%f",BMI);

}