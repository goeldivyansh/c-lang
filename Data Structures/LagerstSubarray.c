#include<stdio.h>
#include<limits.h>
void main()
{
    int a[7] = {-3,4,-1,0,6,-4,9},n=7;
 //   int a[] = {2,5,1,8,3};

    // Time Complexity O(n)//

    int i,j,s = 0,FSum= INT_MIN,CSum=0;

    printf("\n\nArray is : ");

    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }

    for(i=0;i<n;i++)
    {
        CSum = CSum + a[i];

        if(CSum < 0)
        {
            CSum = 0;
        }
        else
        {
            FSum = CSum;
        }
    }

    printf("\nMax Sum : %d",FSum);







    // Time Complexity O(n^2)//

  /*  int b[n],i,j,s = 0,max= INT_MIN,sum=0;

    printf("\n\nArray is : ");

    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }

    for(i=0;i<n;i++)
    {
        s = 0;
        for(j=0;j<=i;j++)
        {
            s = s + a[j];
        }
        b[i] = s;
    }

    for(i=0;i<n;i++)
    {
        sum = 0;
        for(j=i;j<n;j++)
        {
            sum = b[j] - b[i] + a[i];
        }

        if(sum>max)
        {
            max = sum;
        }
    }
    printf("\nMax Sum : %d",max);*/
















    // Time Complexity O(n^3)//
 /*
    int i=0,j,k,max= INT_MIN,sum=0;

    printf("\n\nArray is : ");

    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            sum = 0;
            for(k=i;k<=j;k++)
            {
                sum = sum + a[k];
            }
            if(sum > max)
            {
                max = sum;
            }
        }
    }
    printf("\n\nMaximum Sum is : %d",max);

    */

}
