#include<stdio.h>
#include<stdbool.h>
void main()
{
    int n,i,j,x=0,p,q;
    bool prime = true , pr = true,pre = false;

    printf("Enter the number : ");
    scanf("%d",&n);

    int a[n];
    for(i=n-1;i>1;i--)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                prime = false;
                break;
            }
        }
        if(prime == true)
        {
            a[x] = i;
            x++;
        }
        prime = true;
    }

    for(i=0;i<x;i++)
    {
        printf("%d  ",a[i]);
    }


    for(i=x;i>=(x-1)/2;i--)
    {
        pr = true;
        if(a[i]>1 && a[i]<n-1)
        {
            p = a[i];
            q = n - a[i];

            for(j=2;j<q;j++)
            {
                if(q%j==0)
                {
                    pr = false;
                    break;
                }
            }
        }
        else
        {
            pr = false;
        }

        if(pr == true)
        {
            printf("\nCan be expressed and numbers are %d and %d" ,p,q);
            pre = true;
        }
    }

    if(pre == false)
    {
        printf("\nCannot be expressed");
    }

}
    /*

    for(i=x-1;i>=(x-1)/2;i--)
    {
        pr = true;
        if(a[i]>1 && a[i]<n-1)
        {
            p = a[i];
            q = n - a[i];

            for(j=2;j<q;j++)
            {
                if(q%j==0)
                {
                    pr = false;
                    break;
                }
            }
        }
        else
        {
            pr = false;
        }

        if(pr == true)
        {
            printf("\nCan be expressed and numbers are %d and %d" ,p,q);
        }
    }

    if(pr == false)
    {
        printf("\nCannot be expressed");
    }


}
*/
