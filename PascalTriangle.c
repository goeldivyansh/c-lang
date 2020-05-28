#include<stdio.h>
void main()
{
    int i,n=5;
    for(i=1;i<=n;i++)
    {
        int ai[i];
    }

    for(i=1;i<=n;i++)
    {
        a(i)[0] = 1;
        a(i)[i-1] = 1;
    }

    for(i=3;i<=n;i++)
    {
        for(j=1;j<i-1;j++)
        {
            ai[j] = a(i-1)[j-1] + a(i-1)[j];
        }
    }

    for(i=1;i<=n;i++)
    {
        for(j=n;j>1;j--)
        {
            printf(" ");
        }
        for(j=0;j<i;j++)
        {
            printf("%d ",ai[j]);
        }
        printf("\n");
    }

































}
