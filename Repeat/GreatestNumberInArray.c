#include<stdio.h>
void main()
{
    int a[5],i,x,j=0;

    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=1;i<5;i++)
    {
        if(a[i]>a[j])
        {
            a[j]=a[i];
            x = a[j];
        }
        else
        {
            x = a[j];
        }
    }
     printf("greatest number is %d",x);
}

