#include<stdio.h>
void main()
{
    int i,n;

    printf("Enter the number of which factors you want : ");
    scanf("%d",&n);

    printf("Factors are : ");

    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d  ",i);
        }
    }
}
