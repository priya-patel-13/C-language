#include <stdio.h>

void main()

{

int i, sum=0;

int n=2;

int a[n];

for(i=0;i<=n;i++)

{

scanf("%d",&a[i]);

}

for(i=0;i<=n;i++)

{

sum=sum+a[i];

}

printf("%d",sum);



}