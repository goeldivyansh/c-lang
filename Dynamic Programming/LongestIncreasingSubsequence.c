#include<stdio.h>

void main()
{
    int n;
    int i,j,max;
    scanf("%d",&n);
    int a[n],b[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
       b[i] = 1;
    }

   // 3 4 -1 0 6 2 3

    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[j] < a[i])
            {
                if(b[i] < b[j]+1)
                    b[i] = b[j] + 1;
            }
        }
    }

    max = b[0];
    for(i=1;i<n;i++)
    {
        if(b[i] > max)
            max = b[i];
    }
    printf("%d",max);
}
