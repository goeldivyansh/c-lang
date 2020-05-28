#include<stdio.h>
void main()
{
    int n,i,j,k,x,count=1;

    printf("Enter number of rows : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf(" ");
        }

        x = (2*i-1);

        for(k=i;k<=x;k++)
        {
            printf("%d ",k);
        }

        for(k=x-1;k>=i;k--)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
}
