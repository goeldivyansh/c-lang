#include<stdio.h>
main()
{
    int a[10];
    int n=10,i,j,min,x,ind=0;

    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    min = a[0];

    for(i=n;i>0;i--)
    {
        for(j=1;j<i;j++)
        {
            if(a[j] < min)
            {
                a[j] = min;
                ind = j;
            }
        }

        x = a[j];
        a[j] = a[i-1];
        a[i-1] = x;
        min = a[0];
        ind = 0;
    }

    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
}
