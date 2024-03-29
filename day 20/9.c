#include<stdio.h>
void main()
{
    int arr[5];
    int sq;

    for (int i = 0; i <5; i++)
    {
        printf("Enter Value of array :");
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i <5; i++)
    {
        
        sq=arr[i]*arr[i];
        printf("\n a[%d]=%d",i,sq);
        
    }
    
    

}