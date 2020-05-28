#include<stdio.h>

void rev(int *x,int *y)
{
    int p;
    p = *x;
    *x = *y;
    *y = p;
}

void main()
{
    int a[8] = {1,0,3,2,0,4,0,0};
    int i,n=7,max =8,x;

    printf("Initial array : ");
    for(i=0;i<max;i++)
    {
        printf("%d ",a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i] == 0)
        {
            if(a[n] == 0)
            {
                while(a[n] == 0)
                {
                    n--;
                }
            }
            //rev(&a[i],&a[n]);
            x = a[i];
            a[i] = a[n];
            a[n] = x;
            n--;
        }
    }

    printf("\nNew array : ");
    for(i=0;i<max;i++)
    {
        printf("%d ",a[i]);
    }
}
