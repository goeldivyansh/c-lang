#include<stdio.h>
//#include<math.h>

int abs(int x)
{
    if(x<0)
    {
        return -x;
    }
    else
    {
        return x;
    }
}

void main()
{
    printf("%d",abs(-750));

    int a[] = {-48,-14,-6,0,1,8,50,52};


    int i1,i2,sum,i,n = 8,l=0,r=7;
    sum = a[l] + a[r];
    i1 = l;
    i2 = r;

    printf("Array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }

    while(l<r-1)
    {
        if(a[l] + a[r] == 0)
        {
            i1 = l;
            i2 = r;
            break;
        }
        else
        if(abs(a[l] + a[r]) < abs(sum))
        {
            sum = a[l] + a[r];
            i1 = l;
            i2 = r;
        }
        else
        if(abs(a[l+1] + a[r]) < abs(sum))
        {
            sum = a[l+1] + a[r];
            i1 = l+1;
            i2 = r;
            l++;
        }
        else
        if(abs(a[l] + a[r-1]) < abs(sum))
        {
            sum = a[l] + a[r-1];
            i1 = l;
            i2 = r-1;
            r--;
        }
        else
        {
            l++;
            r--;
        }
    }

    printf("\n\nTwo Numbers are : %d, %d",a[i1],a[i2]);

}

/*
int smallest(int a, int b, int c)
{
    int a1 = a;
    int b1 = b;
    int c1 = c;
    if(abs1(a) <= abs1(b) && abs1(a) <= abs1(c))
    {
        return a1;
    }
    else if(abs1(b) <= abs1(a) && abs1(b) <= abs1(c))
    {
        return b1;
    }
    else if(abs1(c) < abs1(a) && abs1(c) < abs1(b))
    {
        return c1;
    }
}

void main()
{
   // printf("%d",abs(-50));
    //printf("\nans = %d\n",smallest(-50,20,10));

    int a[] = {5,2,14,-6,0,-14,50,-48};


    int i1,i2,sum,sum1,sum2,i,n = 8,x;
    sum = a[0] + a[1];
    i1 = 0;
    i2 = 1;

    for(i=2;i<n;i++)
    {
        sum1 = sum + a[i] - a[i1];
        sum2 = sum + a[i] - a[i2];

        x = smallest(sum,sum1,sum2);

        if(x == sum1)
        {
            sum = sum1;
            i1 = i;
        }
        else
        if(x == sum2)
        {
            sum = sum2;
            i2 = i;
        }
    }

    printf("Two Numbers are : %d, %d",a[i1],a[i2]);

}
*/
