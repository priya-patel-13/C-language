
#include<stdio.h>
squnumber(int a)
{
    
    int b;
    b=a*a;
    printf("cube=%d",b);
}


main()
{
    int x;

    printf("enter a:");
    scanf("%d",&x);
   

    squnumber(x);

}
