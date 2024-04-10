

#include<stdio.h>
calculateSumOfSquares(int n)
{
        int sum=0;

        for(int i=1; i<=n; i++)
        {
            if(i%2==0)
            {
                sum +=(i*i);
            }
        }
        return sum;
}

main()
{
    int n;

        printf("enter n:");
        scanf("%d",&n);

        

        int ans=calculateSumOfSquares(n);

        printf("the sum is:%d",ans);
        return 0;
}
