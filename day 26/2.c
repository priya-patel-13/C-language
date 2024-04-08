
#include<stdio.h>
mulnumber(int a,int b)
{
    
    int c;
    c=a*b;
    printf("mul=%d",c);
}


main()
{
    int x,y;

    printf("enter a:");
    scanf("%d",&x);
    printf("enter b:");
    scanf("%d",&y);

    mulnumber(x,y);

}
