#include <stdio.h>
void main()
{
    int a[3],sum,avr;

    for (int i=0;i<3;++i)
    {
        scanf("%d",&a[i]);
    }
    for (int i=0;i<3;++i)
    {
        printf("%d\n",a[i] );
    }
    for(int i=0;i<3;++i)
    {
        sum=sum+a[i];
        avr=sum/3;
    }
    printf("the addition of all elements %d\n",sum);
        printf("the avr.. of all elements %d\n",avr);

}