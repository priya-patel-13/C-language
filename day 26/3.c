
#include<stdio.h>

divinumber(int a,int b){
    if (a %b == 0)
    {   
        printf("the divisor is zero.");
    }
    else{
        printf("the divisor is Not zero.");
    }
    
}
void main()
{
 int x,y;

    printf("enter a:");
    scanf("%d",&x);
    printf("enter b:");
    scanf("%d",&y);

    divinumber(x,y);
}