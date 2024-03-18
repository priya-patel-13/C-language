#include <stdio.h>
void main()
{
	int i=1,s;
	printf("enter the value of s:");
	scanf("%d",&s);

	do{
       if(i%2==0){
		printf("%d\n",i);
	}
		i++;

	}while(i<=s);
}