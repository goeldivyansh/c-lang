#include<stdio.h>
void main()
{
    int i,j,n1,n2;
    int isprime=1;
    printf("Enter n1 : ");
    scanf("%d",&n1);
    printf("Enter n2 : ");
    scanf("%d",&n2);

    printf("Prime numbers are : ");
    for(i=n1;i<=n2;i++)
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
