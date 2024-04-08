
#include<stdio.h>
cubenumber(int a)
{
    
    int b;
    b=a*a*a;
    printf("cube=%d",b);
}


main()
{
    int x;

    printf("enter a:");
    scanf("%d",&x);
   

    cubenumber(x);

}
