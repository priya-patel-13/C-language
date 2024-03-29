#include<stdio.h>
void main()
{
    int arr[5];
    int odd[5];

    for (int i = 0; i <5; i++)
    {
        printf("Enter Value of array :");
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i <5; i++)
    {
        if(arr[i]%2)
        {
            odd[i]=arr[i];
            printf("%d\n",odd[i]);
        }
        
    }
    

}