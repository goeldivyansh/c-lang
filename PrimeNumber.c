#include<stdio.h>
void main()
{
    int i,j,n;
    int isprime=1;
    printf("Enter n : ");
    scanf("%d",&n);

    printf("Prime numbers are : ");
    for(i=2;i<=n;i++)
    {
        isprime = 1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                isprime = 0;
            }
        }
        if (isprime == 1)
        {
            printf("%d  ",i);
        }
    }
}
