#include<stdio.h>
void main()
{
    int i,j,n = 5,x;
    int a[5] = {8,5,1,4,3};

//    1 5 8 4
  //        xs
    for(i=1;i<n;i++)
    {
        x = a[i];
        for(j=i-1;j>=0;j--)
        {
            if(a[j] > x)
            {
                a[j+1] = a[j];
            }
            else
                break;

        }
        a[j+1] = x;
    }

    printf("\nSorted Array (Insertion sort) : ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}
