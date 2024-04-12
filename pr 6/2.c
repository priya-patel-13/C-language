
#include<stdio.h>

int swap(int *a,int *b,int *c)
{
    int *t;

    t=a;
    a=b;
    b=c;
    c=t;
    printf("\n\n a=%d  \n b=%d \n c=%d",*a , *b , *c);
}


main()
{
    int a,b,c;

    printf("enter value:");
    scanf("%d",&a);

    printf("enter value:");
    scanf("%d",&b);

     printf("enter value:");
    scanf("%d",&c);

    printf("\n a=%d",a);
    printf("\n b=%d",b);
    printf("\n b=%d",c);

    swap(&a,&b,&c);
}
