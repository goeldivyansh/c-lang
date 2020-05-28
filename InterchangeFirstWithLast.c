#include<stdio.h>
void main()
{
    int n=10,x,i;
    int a[] = {0,1,2,3,4,5,6,7,8,9};

    for(i=0;i<n/2;i++)
    {
        x = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = x;
    }

    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }

}
