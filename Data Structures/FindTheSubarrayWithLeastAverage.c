#include<stdio.h>
void main()
{
    int a[] = {3,7,90,20,10,50,4};

    int sum=0,n=7,i,index=0,k=3,min;

    for(i=0;i<n;i++)
    {
        if(i<k)
        {
            sum = sum + a[i];
            min = sum;
        }
        else
        {
            sum = sum + a[i] - a[i-k];
            if(sum < min)
            {
          //      sum = sum + a[i] - a[i-k];
                index = i-k+1;
            }
        }
    }

    for(i = index;i<index+k;i++)
    {
        printf("%d ",a[i]);
    }
}
