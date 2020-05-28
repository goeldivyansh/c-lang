#include<stdio.h>

void main()
{
    int a[10] = {1,2,1,3,1,2,5,6,2,4};
    int n=10,i,j,k;

    printf("Orignal array : ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i] == a[j])
            {
                for(k=j;k<n;k++)
                {
                    a[k] = a[k+1];
                }
                n--;
               j--;
            }
        }
    }

    printf("\n\nNew array : ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}
