#include <stdio.h>
void main()
{
	int a[3][3],sum=0;

	printf("Enter the value of a=\n");
	for (int i=0;i<3;++i)
	{
		for (int j=0;j<3;++j)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("This is array...\n");

	for(int i=0;i<3;++i)

	{
		for (int j=0;j<3;++j)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");

	}
	printf("The addition of all array\n");
	for (int i=0;i<3;++i)
	{
		for (int j=0;j<3;++j)
		{
			sum=sum+a[i][j];
		}
		printf("\n");

	}
	printf("the total of all array= %d",sum);

}