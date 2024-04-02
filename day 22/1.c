#include<stdio.h>
void main()
{
    int i,a[5];

    for(i=0;i<5;i++)
    {
        printf("enter the value:");
        scanf("%d",&a[i]);
    }
    printf("\n");


    for(i=1;i<5;i++)
    {
        printf("\n%d",a[i]);
    }

    printf("\n");
    
    for(i=1;i<5;i++)
    {
       if(a[i]<0)
       {
        printf("nagative:%d",a[i]);
       }
       printf("\n");
        
    }

}